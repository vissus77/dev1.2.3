#include<stdio.h>
void main()
{
  
int i,re,n,count=0;
int a[10],b[10];
   printf("Enter the intiger value");
   scanf("%d", &n);
   for(i=0;n>0;i++)  
   {
    re=n%2;
    a[i]=re;
    n=n/2;
    count++;
   }

  for(i=count-1;i>=0;i--)
   b[count-i-1]=a[i];

  for(i=0;i<count;i++)
  printf("%d",b[i]);
}

