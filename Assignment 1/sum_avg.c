#include<stdio.h>
int main()
{
int n1,n2,n3,sum,avg;
printf("Name: Sukanya Maiti, Class: MCA_1A, Roll:59\n");
printf("Enter the 1st number : ");
scanf("%d",&n1);
printf("Enter the 2nd number : ");
scanf("%d",&n2);
printf("Enter the 3rd number : ");
scanf("%d",&n3);
sum=(n1+n2+n3);
avg=sum/3;
printf("The Sum and Average is %d and %d ", sum,avg);
return 0;
}
