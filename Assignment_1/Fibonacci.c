#include<stdio.h>
int main()
{
	int i,n,n1,n2,n3;
	printf("Name: Sukanya Maiti, Class: MCA_1A, Roll:59\n");
	printf("Enter number of terms for fibonacci sequence: \n");
	scanf("%d",&n);
	n1=0;n2=1;
	printf("Fibonacci series :%d %d ",n1,n2);
	for(i=2;i<n;i++){
		n3=n1+n2;
		printf("%d ",n3);
		n1=n2;
		n2=n3;
	}
	printf("\n");
}
