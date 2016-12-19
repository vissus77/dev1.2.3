#include<stdio.h>
  void fib(int x,int y);
void main()
{
  int a=0,b=1;      

  fib(a,b);

}

 void fib(int x,int y)
{
  int z=0,n;
  printf("enter the n value");
  scanf("%d",&n);
   printf("%d %d",x,y); 
  while(z<n)
  {
  z=x+y;
  x=y;
  y=z;
  printf(" %d",z);
  n--;
  }

}



