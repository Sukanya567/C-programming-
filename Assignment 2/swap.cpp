#include <stdio.h>
void swapByValue(int a, int b) 
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue:");
    printf("a = %d, b = %d\n", a, b);
}
void swapByReference(int *a, int *b) 
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int num1, num2;
    printf("Name: Sukanya Maiti, Class: MCA_1A, Roll:59\n");    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("Original values: ");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    swapByValue(num1, num2);
    printf("After swapByValue: ");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    swapByReference(&num1, &num2);
    printf("After swapByReference: ");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
