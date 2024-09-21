#include <stdio.h>
int sum (int num)
{
    if (num > 0)
        return (num % 10 + sum (num / 10));
    else
       return 0;
}
int main()
{
    int n, s;
    printf("Name: Sukanya Maiti, Class: MCA_1A, Roll:59\n");        
    printf("Enter the number: ");
    scanf("%d", &n);
    s = sum(n);
    printf("Sum of digits in %d is %d\n", n, s);
    return 0;
}
 
