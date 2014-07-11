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
      printf("Value generated: %d\n",skittles);
      printf("Try again: \n");
      shot = GetInt();
    }
  }
}
