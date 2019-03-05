// Ahad Khan
// 1010601
// 09/24/2018
// Assignment 1

#include<stdio.h>


int ackermann(int m, int n)
{

  if (m == 0 && n >= 0)
  {
    return n + 1;
  }
  else if (n == 0 && m > 0)
  {
    return ackermann(m - 1, 1);
  }
  else
  {
    return ackermann(m - 1, ackermann(m, n - 1));
  }

}
