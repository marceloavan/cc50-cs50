#include <cc50.h>
#include <stdio.h>
#include <stdlib.h>

// prototype (fucking interface) - begin
int get_length(long long value);
long long * convert_to_array(long long value, int length);
int check_sum(long long * data, int length);
char * get_type_card(long long * data, int length);
// prototype (fucking interface) - end

int main()
{
  int max_length = 16;
  long long * data;

  printf("Type your card number: ");
  long long value = GetLongLong();
  int length = get_length(value);

  while (length > max_length)
  {
    printf("The length of card number is bigger than max permitted. Retry: ");
    value = GetLongLong();
    length = get_length(value);
  }

  data = convert_to_array(value, length);

  if (check_sum(data, length) == 0)
  {
    printf("INVALID\n");
  } else {
    printf(get_type_card(data, length));
  }
}

long long * convert_to_array(long long value, int length)
{
  /* http://stackoverflow.com/questions/11656532/returning-an-array-using-c */
  long long * data = malloc(length);
  for (int i = length-1; i >= 0; i--)
  {
    data[i] = value % 10;
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

/* return 1(one) when the data is valid or 0(zero) when it is not valid */
/* the length is passed like a param because of the pointer array */
int check_sum(long long * data, int length)
{
  long long check_count = 0;
  int controller = 0;
  for (int i = length-1; i==0; i--)
  {
    if (controller == 0)
    {
      check_count += data[i];
      controller = 1;
    }
    else
    {
      long long value = (data[i] * 2);
      int length = get_length(value);
      if (length > 1)
      {
        /* at this point the follow error was throws: "Segmentation fault (core dumped)
           if I used the method convert_to_array, because that a new for was maked */
        for (int i = length-1; i >= 0; i--)
        {
          long long valueAux = value % 10;
          check_count += valueAux;
          value /= 10;
        }
      }
      else
      {
        check_count += value;
      }
      controller = 0;
    }
  }
  printf("Check sum of card number: %llu\n", check_count);
  if (check_count % 10 == 0) {
    return 1;
  }
  return 0;
}

/*
  Return the type of card number in a char *.

  Valitadions:

  American Exp = 15 dig - Begin: 34 ou 37 - return: AMEX;
  MasterCadr = 16 dig - Begin: 51, 52, 53 ou 55 - return: MASTER;
  Visa = 16 ou 13 dig - Begin: 4 - return: VISA;
  Otherwise = / - / - return INVALID;

*/
char * get_type_card(long long * data, int length)
{
  long long firstDigit = data[0];
  long long secondDigit = data[1];
  if (length == 15 && firstDigit == 3 && (secondDigit == 4 || secondDigit == 7))
  {
    return "AMEX\n";
  }
  else if (length == 16 && firstDigit == 5 && (secondDigit == 1 ||
    secondDigit == 2|| secondDigit == 3 || secondDigit == 5))
  {
    return "MASTERCARD\n";
  }
  else if ((length == 16 || length == 13) && firstDigit == 4)
  {
    return "VISA\n";
  }
  else
  {
    return "INVALID\n";
  }
}
