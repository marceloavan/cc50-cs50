#include <cc50.h>
#include <stdio.h>
#include <stdlib.h>

// prototype
void printChart(int m_f_height, int m_m_height, int f_m_height, int f_f_height);

// global variables
int chart_height = 20;

int main()
{
  printf("M spotting F: ");
  long long m_f = GetLongLong();
  printf("M spotting M: ");
  long long m_m = GetLongLong();
  printf("F spotting M: ");
  long long f_m = GetLongLong();
  printf("F spotting F: ");
  long long f_f = GetLongLong();

  float total = m_f + m_m + f_m + f_f;
  printf("Total: %f\n", total);

  int m_f_height = (m_f / total) * chart_height;
  printf("m_f_height: %i\n", m_f_height);
  int m_m_height = (m_m / total) * chart_height;
  printf("m_m_height: %i\n", m_m_height);
  int f_m_height = (f_m / total) * chart_height;
  printf("f_m_height: %i\n", f_m_height);
  int f_f_height = (f_f / total) * chart_height;
  printf("f_f_height: %i\n", f_f_height);

  printChart(m_f_height, m_m_height,
             f_m_height, f_f_height);
}

void printChart(int m_f_height, int m_m_height, int f_m_height, int f_f_height)
{
  printf("\n");
  printf(" ### THIS IS MY CHART ### \n");
  for (int i = chart_height; i >= 0; i--)
  {
    // the last one
    if (i == 0) {
      printf("M-F  M-M  F-M  F-F\n");
      break;
    }

    //M-F
    if (m_f_height >= i)
    {
      printf("###  ");
    }
    else
    {
      printf("     ");
    }

    //M-M
    if (m_m_height >= i)
    {
      printf("###  ");
    }
    else
    {
      printf("     ");
    }

    //F-M
    if (f_m_height >= i)
    {
      printf("###  ");
    }
    else
    {
      printf("     ");
    }

    //F-F
    if (f_f_height >= i)
    {
      printf("###  ");
    }
    else
    {
      printf("     ");
    }
    printf("\n");
  }
}
