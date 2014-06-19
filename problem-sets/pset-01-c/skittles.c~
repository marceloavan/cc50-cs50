#include <cc50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));
  int skittles = rand() % 1024;
  bool continue = true;

  while(continue)
  {
    int shot = GetInt();
    if (shot == skittles)
    {
      continue = false;
    }
  }
  printf("Correct!");
}

