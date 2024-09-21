#include<stdio.h>  
int main()   
{   
    float fahrenheit, celsius;  
    printf("Name: Sukanya Maiti, Class: MCA_1A, Roll:59\n");  
    printf("Enter the temperature in Celcius: ");
    scanf("%f", &celsius);
    fahrenheit =( (celsius*9)/5)+32;
    printf("\n\n Temperature in fahrenheit is:  %.3f \n",fahrenheit);
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit); 
    celsius=((fahrenheit-32)*5/9);  
    printf("\n\n Temperature in celsius is:  %.3f",celsius);  
    return (0);  
}  
