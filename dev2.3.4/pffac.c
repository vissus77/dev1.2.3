#include<stdio.h>
int fact(int *x);
void main()
{
  int n,*p1;
  printf("Enter the n value");
  scanf("%d",&n);
  p1=&n;
  fact(p1);
}

  int fact(int *x)
   {
    int fac=1,y;
    y=*x;
    while(y>0) 
   { 
    fac=fac*y;
    y--;
   }   
 printf("%d",fac);
    }
