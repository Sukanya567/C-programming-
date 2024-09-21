#include <stdio.h>
int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

int min(int num1, int num2) 
{
    return (num1 > num2 ) ? num2 : num1;
}
int main() 
{
    int num1, num2, maximum, minimum;
    printf("Name: Sukanya Maiti, Class: MCA_1A, Roll:59\n");
    printf("Enter 1st  number: ");
    scanf("%d", &num1);
    printf("Enter 2nd  number: ");
    scanf("%d", &num2);
    maximum = max(num1, num2);  
    minimum = min(num1, num2);  
    printf("\nMaximum = %d\n", maximum);
    printf("Minimum = %d", minimum);
    return 0;
}
