#include <cc50.h>
#include <stdio.h>
#include <stdlib.h>

// prototype (fucking interface)
int get_length(long long value);
long long * convert_to_array(long long value);
int check_sum(long long * data, int length);

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

  data = convert_to_array(value);

  if (check_sum(data, length) == 0)  
  {
  }

  printf("End value: %llu; data-0: %llu; length: %i\n;", value, data[0], length);
}

long long * convert_to_array(long long value) 
{ 
  /* http://stackoverflow.com/questions/11656532/returning-an-array-using-c */
  int length = get_length(value);
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
/* the length is passed how a param because the pointer array */
int check_sum(long long * data, int length)
{
  printf("Length of array in check_sum: %i\n", length);
  long long check_count = 0;
  int controller = 0;
  for (int i = 0; i<length; i++) 
  {
    if (controller == 0) 
    {
      check_count += data[i];
      controller = 1;
      printf("value %llu, check_count: %llu\n", data[i], check_count);
    } 
    else 
    {
      long long value = (data[i] * 2);
      printf("value %llu\n", value);
      if (get_length(value) > 1)  
      {
        // at this point the follow error is throws: "Segmentation fault (core dumped)"
        long long * dataValue = convert_to_array(value);
        check_count += dataValue[0];
        check_count += dataValue[1];
      }
      else
      {
        check_count += value;
      }      
      controller = 0;
      printf("value %llu, check_count: %llu\n", data[i], check_count);
    }
  }
  printf("check_count: %llu\n", check_count);
  return 0;
}
