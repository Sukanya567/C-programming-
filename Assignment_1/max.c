#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Name: Sukanya Maiti, Class: MCA_1A, Roll:59\n");    
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    if(n1>n2)
    {
        printf("%d is maximum", n1);        
    }
    if(n2>n1)
    {
        printf("%d is maximum", n2);
    }
    if(n1==n2)
    {
        printf("Both are equal");
    }
    return 0;
}
