#include<stdio.h>
int fib(int *x,int *y);
void main()
{
  int a=0,b=1;
  int *p1,*p2;
  p1=&a;
  p2=&b;
  fib(p1,p2);
}

  int fib(int *x,int *y)
  {
    int *z,c=0;
   z=&c;
  printf("%d %d",*x,*y);
  while(*z<50)
{ 
  *z=*x+*y;
  *x=*y;
  *y=*z;
  printf(" %d",*z);
}
  }

