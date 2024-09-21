#include<stdio.h>  
int main()    
{    
 printf("Name: Sukanya Maiti, Class: MCA_1A, Roll:59\n");    
 int n,r,sum=0,temp;    
 printf("Enter a number: ");    
 scanf("%d",&n);    
 temp=n;    
 while(n>0)    
 {    
  r=n%10;    
  sum=(sum*10)+r;    
  n=n/10;    
 }    
 if(temp==sum)    
   printf("It is a Palindrome number ");    
 else    
   printf("It is not a palindrome number");   
 return 0;  
} 
