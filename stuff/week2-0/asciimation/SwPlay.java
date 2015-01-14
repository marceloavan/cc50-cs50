//==============================================================================
// 
// STAR WARS ASCIIMATION Movie file player
//
// Simon Jansen 1999
// http://www.asciimation.co.nz
//

//==============================================================================

import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import java.awt.SystemColor.*;
import java.net.*;
import java.io.*;


public class SwPlay extends Applet {

   public static void main (String[] s) {
	
	new AppletShell("Star Wars",600,300,false, false, new SwPlay());
   }
    
   DisplayArea displayArea = new DisplayArea(13, 67);
   MouseProcessor mouseProcessor = new MouseProcessor();

   SwPlayThread threadMain;

   public void init() {
	   System.out.println("Inside INIT method");
	   setLayout(new BorderLayout());
	   displayArea.setForeground(Color.white);
	   displayArea.setBackground(Color.black);
	   this.add( displayArea, BorderLayout.CENTER );	  
	   displayArea.show();
	   show();
	}
      
   public void start() {
	   System.out.println( "Inside START method" );
   	if( ( threadMain == null ) || ( threadMain.isAlive() == false ) ){  	   
   	   System.out.println( "Starting new thread" );
   	   threadMain = new SwPlayThread();
   	   threadMain.bFastForward = false;
   	   System.out.println("Adding mouse listener");
   	   displayArea.addMouseListener( mouseProcessor );  
   	   System.out.println("Getting resource stream");	      
   	   threadMain.inputStream = getClass().getResourceAsStream( "data/sw1.txt" );		   
   	   if( threadMain.inputStream == null ){
   		   System.out.println( "Getting resource failed" );
   	   }        
   	   if( threadMain == null ){
   		   System.out.println( "New threadMain failed" );
   	   }
   	   threadMain.bAtEnd = false;         
   	   threadMain.displayArea = displayArea;
   	   threadMain.start();       	
   	} else { 
   	   System.out.println( "Resuming thread" );
   	   threadMain.newResume();
   	} 
   }
    
    
   public void stop() {
	   System.out.println( "Inside STOP method" );   
	   if( threadMain.bAtEnd == false ) {
	      System.out.println( "Suspending thread" );   
	      threadMain.newSuspend();
   	} else {
	      System.out.println( "Stopping thread" );
	      threadMain.newStop();
	      threadMain = null;		
	   }    
	}
    
   public void destroy() {
	   System.out.println( "Inside DESTROY method" );   
	   displayArea.destroy();
	   if( threadMain != null ){
	      System.out.println( "Stopping thread" );
	      threadMain.stop();
	      threadMain = null;
	   }
	}   
   
   class MouseProcessor extends MouseAdapter{
	
	   MouseProcessor(){
	      System.out.println("Inside MouseProcessor Constructor method");
	   } 
	
	   public void mousePressed(MouseEvent e){
         System.out.println("Inside PRESSED method: FAST FORWARD");
         threadMain.bFastForward = true;
         threadMain.interrupt();
      }
	
	   public void mouseReleased(MouseEvent e){
         System.out.println("Inside RELEASED method: NORMAL SPEED");
         threadMain.bFastForward = false;
         threadMain.interrupt();
      }
	}
    
    
   public class SwPlayThread extends Thread {
   	public boolean bAtEnd;
   	public boolean bFastForward;
   	public DisplayArea displayArea;
   	public InputStream inputStream;
   	public InputStreamReader inputStreamReader;
   	public LineNumberReader lineNumberReader;	   
      public MouseListener mouseListener;	

   	public void run() {
   	   try {
   		   System.out.println( "Inside RUN method" );		
   		   inputStreamReader = new InputStreamReader( inputStream );
   		   if( inputStreamReader == null ){
   		      System.out.println( "New InputStreamReader failed" );
   		   }
   		   lineNumberReader = new LineNumberReader( inputStreamReader );
   		   if( lineNumberReader == null ){
   		      System.out.println( "New LineNumberReader failed" );
   		   }
		
            String lineString = "";
            String outputString = "";
            boolean bStop = false;
            int delay = 0;
            int frame = 0;
            int i;
            boolean bNewFrame = false;

            while( bStop == false ){ 
            
               if(delay > 0){
                  delay--;
               } else {
         
                  // Read frame descriptor line
                  if((lineString = lineNumberReader.readLine()) == null){
                     break;
                  }

                  delay = Integer.valueOf(lineString).intValue();
                  delay = delay - 1;

                  // Read frame
                  outputString = "";
                  for(i = 0; i < 13; i++){
                     if((lineString = lineNumberReader.readLine()) == null){
                        break;
                     }
                     outputString = outputString + lineString;
                     outputString = outputString + "\n";
                  }

                  if(i != 13){
                     break;
                  }

                  bNewFrame = true;

               }  

               frame++;

               if((bFastForward == false) || ((frame % 4) == 0)){       // Time to update screen
                  if(bNewFrame == true){
                     displayArea.setText(outputString);                     
                  }

                  if(bFastForward == false){
                     showStatus("Star Wars Asciimation by Simon Jansen");
                  } else {
                     showStatus("Fast Forward");
                  }
               }

               try{                                                  
                  if ( bFastForward == true ){
                     sleep (1);
                  } else {                      
                     sleep (1000/12);                     
                  }  
               } catch( java.lang.InterruptedException e ){
                  System.err.println( "Caught Exception: " + e.getMessage() );
               }

               bNewFrame = false;

               suspensionCheck();
        
               if(killed){
                  break;
               } 
         } // End while
		
   		showStatus ("Star Wars Asciimation by Simon Jansen");		
	   
   	   } catch( Exception e ) {
   		   System.err.println( "Caught Exception: " + e.getMessage() );          
   	   } finally {              
   		   System.out.println( "Inside FINALLY" );
   		   try {
   		      inputStream.close();
   		      inputStream = null;
   		   } catch( Exception e ) {
   		      System.err.println( "Caught Exception: " + e.getMessage() );     
   		   }
         }
         System.out.println( "Removing mouse event listener" );
         displayArea.removeMouseListener( mouseProcessor );   
         bAtEnd = true;	
                     
   	} //End run

   	private boolean suspended = false;
   	private boolean killed = false;	
	
   	private synchronized void suspensionCheck() {
   	   while (suspended) {
   		   try {
   		      this.wait();
   		   } catch (InterruptedException e) {
   		      System.err.println( "Caught Exception: " + e.getMessage() );
   		   }
   	   }
   	}
		
   	public synchronized void newStop() {
   	   suspended = false;
   	   killed = true;
   	   this.notify();
   	}
	
   	public synchronized void newSuspend() {
   	   suspended = true;
   	}
	
   	public synchronized void newResume() {
   	   suspended = false;
   	   this.notify();
   	}
	
   } // End SWPlayThread


   public class DisplayArea extends Canvas {

	   public DisplayArea(int rows, int cols) {
	      this.rows = rows + 1;
	      this.cols = cols;
	   }
		
	   public synchronized void setText(String s) {
	      data = s;
	      Graphics g = this.getGraphics();
	      this.paint(g);
	      g.dispose();
	   }

	   Image img;
	   Graphics g_img;
	   String data;
	   String olddata;
	   Font f;
	   FontMetrics fm;
	   int xsize, ysize;
	   int xoff, yoff;
	   int charxsize, charysize, charabovebaseline;
	   int rows, cols;
	
	
	   public void destroy() {
	      g_img.dispose();
	      img.flush();	    
	   }

	   public void init() {
	      Dimension d = this.getSize();
	      img = this.createImage(d.width,d.height);
	      g_img = img.getGraphics();
	      f = new Font("Courier",Font.PLAIN,14);
	      g_img.setFont(f);
	      fm = g_img.getFontMetrics();
	      charxsize = fm.stringWidth("0");
	      charysize = fm.getHeight();
	      charabovebaseline = fm.getMaxAscent();
	      xsize = d.width;
	      ysize = d.height;
	      xoff = (xsize - (charxsize*cols))/2;
	      yoff = (ysize - (charysize*rows))/2;
	   }

	   Color fg = Color.white;
	   Color bg = Color.black;
	   public void setForeground(Color c) {
	      fg = c;
	   }
	
	   public void setBackground(Color c) {
	      bg = c;
	   }
	
	   public synchronized void drawText() {
	      g_img.setColor(Color.black);
	      g_img.fillRect(0,0,xsize,ysize);
	      g_img.setColor(bg);
	      g_img.fillRect(xoff,yoff,charxsize*cols,charysize*rows);
	      g_img.setColor(new Color(64,64,255));
	      g_img.drawRect(xoff,yoff,charxsize*cols,charysize*rows);
	      g_img.setColor(fg);
	      int ypos = yoff+charabovebaseline;
	      int idx = -1;
	      olddata = data;
	      do {
		      idx = data.indexOf('\n');
		      if (idx == -1) {
		         g_img.drawString(data,xoff,ypos);
		         break;
		      } else {
		         String s = data.substring(0,idx);		    
		         g_img.drawString(s,xoff,ypos);
		         data = data.substring(idx+1);		    
		      }
		      ypos += charysize;
	      } while (true);
	    
	   }
	
	   public void paint(Graphics g) {
	      if (g_img == null) {
		      init();
	      }
	      if (olddata != data){
		      drawText();
         }
	      g.drawImage(img,0,0,this);	    
	   }

	   public void update(Graphics g) {
	      paint(g);
	   }
   }
   
    
} //End applet
