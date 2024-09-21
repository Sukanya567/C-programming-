#include <stdio.h>
int main() 
{
  printf("Name: Sukanya Maiti, Class: MCA_1A, Roll:59\n");    
  int n1, n2, n3;
  printf("Enter three different numbers: ");
  scanf("%d %d %d", &n1, &n2, &n3);
  if (n1 >= n2 && n1 >= n3)
    printf("%d is the largest number.", n1);
  if (n2 >= n1 && n2 >= n3)
    printf("%d is the largest number.", n2);
  if (n3 >= n1 && n3 >= n2)
    printf("%d is the largest number.", n3);
  return 0;
}
