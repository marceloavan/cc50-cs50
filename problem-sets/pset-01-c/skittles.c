#include <cc50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));

  int skittles = rand() % 1024;
  printf("Try: \n");
  int shot = GetInt();
  int corrected = 0;

  while (corrected == 0) {
    if (shot == skittles)
    {
      printf("Correct\n");
      corrected = 1;
    } 
    else 
    {
      printf("Incorrect\n");
      if (skittles > shot)
      {
        printf("The value is bigger\n");
      } else
      {
        printf("The value is smaller\n");
      }
      printf("Try again: \n");
      shot = GetInt();
    }
  }
}
