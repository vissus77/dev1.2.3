#include<stdio.h>
void main()
{
  int i,j,sum=0,re,n,count;
  printf("Enter the Binary number");
  scanf("%d", &n);
  for(i=0;n>0;i++)
  {
    j=1; 
    count=i;
    while(count>0)
      {
      j=j*2;
      count--;
       }
   re=n%10; 
   if(i==0&&re==1)
       {
       sum=1;
       j=0;
      }
    sum=sum+re*j;
    n=n/10;
   }
  printf("The Intiger NUmber is : %d",sum);
}

  
