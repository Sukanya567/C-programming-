#include <stdio.h>
int main() 
{
    int n;
    printf("Name: Sukanya Maiti, Class: MCA_1A, Roll:59\n");    
    printf("Enter an integer: ");
    scanf("%d", &n);
    if(n%2 == 0)
        printf("%d is even.", n);
    else
        printf("%d is odd.", n);
    return 0;
}
