#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Name: Sukanya Maiti, Class: MCA_1A, Roll:59\n");
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    printf("Sum of individual digits of the positive integer is %d",sum);
}
