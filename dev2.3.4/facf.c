#include<stdio.h>
int fac(int n);
void main()
{
 int fact,n;
 printf("Enter the factorial of a number");
 scanf("%d",&n);
 fact=fac(n);
 printf("%d",fact);
}

 int fac(int y)
{
  int re=1;
  while(y>0)
  {
  re*=y;
  y--;
  }
  return re;
}


