#include <stdio.h>
int isPrime(int num) 
{
    int i;
    
    for(i=2; i<=num/2; i++)  
    {  
        if(num%i == 0)  
        {
            return 0;
        }  
    } 
    return 1; 
}

int isArmstrong(int num) 
{
    int originalNum, remainder, result = 0;

    originalNum = num;

    while (originalNum != 0) 
	{
        remainder = originalNum % 10;
       result = result + remainder * remainder * remainder;
       originalNum = originalNum / 10;
    }
    return (result == num);
}
int isPerfect(int num) 
{
    int i, sum, n;
    sum = 0;
    n = num;
    
    for(i=1; i<n; i++)  
    {  
        if(n%i == 0)  
        {  
            sum += i;  
        }  
    }
    
    return (num == sum);
}
int main()
{
    int num;
    printf("Name: Sukanya Maiti, Class: MCA_1A, Roll:59\n");    
    printf("Enter any number: ");
    scanf("%d", &num);
    if(isPrime(num))
    {
        printf("%d is Prime number.\n", num);
    }
    else
    {
        printf("%d is not Prime number.\n", num);
    }
    if(isArmstrong(num))
    {
        printf("%d is Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not Armstrong number.\n", num);
    }
    if(isPerfect(num))
    {
        printf("%d is Perfect number.\n", num);
    }
    else
    {
        printf("%d is not Perfect number.\n", num);
    }
    
    return 0;
}

