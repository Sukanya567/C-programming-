#include <stdio.h>
int main() 
{
    int n,s,c,k,r,p;
    printf("Name: Sukanya Maiti, Class: MCA_1A, Roll:59\n");
    printf("Enter the value of n: ");
    scanf("%d", &n);
    k=n;
    p=n;
    c=0;
    while (k!= 0) 
	{
        c++;
        k=k/10;
    }
    s=0;
    while(p!=0)
    {
    	r=p%10;
    	s=s+r*r*r;
    	p=p/10;
    }
    if(n==s)
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is not an Armstrong number.", n);
    return 0;
}
