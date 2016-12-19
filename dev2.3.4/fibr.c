#include<stdio.h>
int fib(int j);
void main()
{
 int i;
 for(i=0;i<10;i++)
 printf("%d",fib(i));
}
  int fib(int j)
  {
   if(j==0)
    return 0;
   if(j==1)
   return 1;
   return fib(j-1)+fib(j-2);
  }


