#include<stdio.h>
void main()
{
  int fact=1,n;
  printf("ENter the factorial of a number");
  scanf("%d",&n);

  while(n>0)
  {
    fact*=n;
   n--;
  }
   printf("The Factorial of Nth value is:%d", fact);
}

