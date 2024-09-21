#include <stdio.h>
int add(int x, int y)
{
    return x+y;
}
int subtract(int x, int y)
{
    return x-y;
}
int multiply(int x, int y)
{
    return x*y;
}
int division(int x, int y)
{
    return x/y;
}
int main()
{
   int a,b;
   printf("Name: Sukanya Maiti, Class: MCA_1A, Roll:59\n");    
   printf("Enter 1st no: ");
   scanf("%d",&a);
   printf("Enter 2nd no: ");
   scanf("%d",&b);
   int c=add(a,b);
   int d=subtract(a,b);
   int e=multiply(a,b);
   int f=division(a,b);
   printf("The sum of two integer is: %d\n",c);
   printf("The subtract of two integer is: %d\n",d);
   printf("The multiply of two integer is: %d\n",e);
   printf("The division of two integer is: %d\n",f);
   return 0;
}
