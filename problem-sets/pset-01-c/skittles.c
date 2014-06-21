#include <cc50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));

  int skittles = rand() % 1024;  
  int shot = GetInt();

  if (shot == skittles)
  {
    printf("Correct");
  } 
  else 
  {
    printf("Value generated: %d\n",skittles);
    printf("Incorrect\n");
  }
}
