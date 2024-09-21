#include<stdio.h>
int check(int a)
{
    if(a%2==0)
	{
        printf("The number is Even");
    }
    else
	{
        printf("The number is Odd");
    }
}
int main()
{
    int a;
    printf("Name: Sukanya Maiti, Class: MCA_1A, Roll:59\n");    
    printf("Enter a number: ");
    scanf("%d",&a) ;
    check(a);
}
