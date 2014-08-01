#include <cc50.h>
#include <stdio.h>
#include <stdlib.h>

// prototype (fucking interface)
int getLength(long long value);
long long * convertToArray(long long value, int length);

int main() 
{
  /*
  American Exp = 15 dig - Inicio: 34 ou 37;
  MasterCadr = 16 dig - Inicio: 51, 52, 53 ou 55;
  Visa = 16 ou 13 dig - Inicio: 4;
  */
  int max_length = 16;
  long long * data;

  printf("Type your card number: ");
  long long value = GetLongLong();
  int length = getLength(value);

  while (length > max_length) {
    printf("The length of card number is bigger then max permitted. Retry: ");
    value = GetLongLong();
    length = getLength(value);
  }

  data = convertToArray(value, length);

  printf("\nEnd %llu %llu\n", value, data[0]);

  free(data);
}

long long * convertToArray(long long value, int length) 
{ 
  long long data[length];
  int i;
  for (i = 0;value>0;i++) 
  {
    if (i == length) 
    {
      printf("ERROR");
      return (0);
    }
    data[i] = value % 10;
    printf("%llu", data[i]);
    value /= 10;
  }
  return (long long * )malloc(sizeof(data));  
}

int getLength(long long value) 
{ 
  int length = 0;
  while (value > 0) 
  {
    value /= 10;
    length++;
  }
  return length;
}
