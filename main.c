// Ahad Khan
// 1010601
// 09/24/2018
// Assignment 1

#include<stdio.h>
#include<stdlib.h>
#include "ackerman.c"
#include "carbon.c"
#include "newton.c"

int main ()
{
  int getNum;
  int m, n, x;
  double a,e;

  do
  {
    printf("Please select an option ranging from 1-5:\n");
    printf("1. carbon, 2. Ackermann, 3. Newton with Recursion 4. Newton with non Recursion, 5. Exit\n");
    scanf("%d",&getNum);

    switch (getNum)
    {
      case 1:
        permuteCarbon();
        break;

      case 2:
        printf("Enter m Value:\n");
        scanf("%d",&m);
        printf("Enter n Value:\n");
        scanf("%d",&n);
        printf("To test Ackermann Function: %d and %d -> Ackermann is %d\n",m,n,ackermann(m,n));
        break;

      case 3:
        printf("Enter number to calculate its square root: ");
        scanf("%d",&x);
        printf("Enter a val for e: ");
        scanf("%lf",&e);
        a = x / 2;
        a = newtonRec(x,e,a);
        printf("Square Root of %d with accuracy of %lf is %lf\n",x,e,a);
        break;

      case 4:
      printf("Enter number to calculate its square root: ");
      scanf("%d",&x);
      printf("Enter a val for e: ");
      scanf("%lf",&e);
      a = x / 2;
      a = newtonNonRec(x,e,a);
      printf("Square Root of %d with accuracy of %lf is %lf\n",x,e,a);
      break;

    case 5:
      break;

    }
  }while (getNum != 5);
  return 0;
}
