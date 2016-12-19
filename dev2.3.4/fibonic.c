#include<stdio.h>
void main()
{
  int a=0,b=1,c;
  printf("%d %d",a,b);
  while(c<50)
  {
    c=a+b;
    a=b;
    b=c;
    printf(" %d",c);
  }
}



