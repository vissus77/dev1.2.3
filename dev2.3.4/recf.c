#include<stdio.h>
int fact(int x);
void main()
{
  int n, re;
  printf("Enter the factorial of number");
  scanf("%d",&n);
  re=fact(n);
  printf("%d",re);
}
  int fact(int x)
  {
   int y;
   if(x==0)
   return 1;
   else
  
   return x*fact(x-1);
 
  }

