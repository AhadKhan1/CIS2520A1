// Ahad Khan
// 1010601
// 09/24/2018
// Assignment 1

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

// Find Square Root of inputted numbers Recursively
double newtonRec (int x, double e, double a)
{

  if (abs(a*a - x) <= e)
  {
    return a;
  }
  else
  {
    a = (a + (x/a)) / 2;
    return newtonRec(x,e,a);
  }

}
// Find Square Root of inputted numbers non Recursively
double newtonNonRec (int x, double e, double a)
{

  do
  {
    a = (a + (x/a)) / 2;
  }while (abs(a*a - x) > e);

  return a;

}
