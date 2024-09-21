#include <stdio.h>
int sum=0,rem;

int revNumFunc(int num)
{
   if(num>0)
   {
      rem=num%10;
      sum=sum*10+rem;
      revNumFunc(num/10);
   }
   else
      return sum;
}
int main()
{
    int num ,revNum;
   	printf("Name: Sukanya Maiti, Class: MCA_1A, Roll: 59\n");    
    printf("Enter a number:");
    scanf("%d",&num);
    revNum=revNumFunc(num);
    printf("After reversing the number is :%d",revNum);
    return 0;
}
