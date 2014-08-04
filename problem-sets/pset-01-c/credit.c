#include <cc50.h>
#include <stdio.h>
#include <stdlib.h>

// prototype (fucking interface)
int get_length(long long value);
long long * convert_to_array(long long value, int length);
int check_sum(long long * data);

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
  int length = get_length(value);

  while (length > max_length) 
  {
    printf("The length of card number is bigger then max permitted. Retry: ");
    value = GetLongLong();
    length = get_length(value);
  }

  data = convert_to_array(value, length);

  if (check_sum(data) == 0)  
  {
  }

  printf("End value: %llu; data-0: %llu; length: %i\n;", value, data[0], length);
}

long long * convert_to_array(long long value, int length) 
{ 
  /* http://stackoverflow.com/questions/11656532/returning-an-array-using-c */
  long long * data = malloc(length);
  for (int i = length-1; i >= 0; i--) 
  {
    data[i] = value % 10;
    printf("%llu\n", data[i]);
    value /= 10;
  }
  return data;
}

int get_length(long long value) 
{ 
  int length = 0;
  while (value > 0) 
  {
    value /= 10;
    length++;
  }
  return length;
}

/* return 1(one) when the data is valid or 0(zero) when is not valid */
int check_sum(long long * data)
{
  // TODO - verify why that way do not work in this case
  int length = sizeof(data)/sizeof(int);
  printf("Length of array in check_sum: %i\n", length);
  for (int i = 1; i<length; i++) 
  {
    
  }
  return 0;
}
