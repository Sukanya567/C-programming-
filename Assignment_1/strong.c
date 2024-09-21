#include <stdio.h>
int main()
{
    printf("Name: Sukanya Maiti, Class: MCA_1A, Roll:59\n");
    int i, org_num, num, r, sum;
    long fact;
    printf("Enter a number: ");
    scanf("%d", &num);
    org_num = num;
    sum = 0;
    while(num > 0)
    {
        r= num % 10;
        fact = 1;
        for(i=1; i<=r; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        num = num / 10;
    }
    if(sum == org_num)
    {
        printf("%d is STRONG NUMBER", org_num);
    }
    else
    {
        printf("%d is NOT STRONG NUMBER", org_num);
    }
    return 0;
}
