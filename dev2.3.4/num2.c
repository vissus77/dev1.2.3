#include<stdio.h>
void main()
{
 int i, j, x, n;
 printf("Enter the Nth Number 0 to 9");
 scanf("%d",&n);
 for(i=n;i>0;i--)
  {
    for(j=0 ;j<i-1;j++)
    {
      printf(" ");
     
    }
     
    for(x=n-j;x>=1;x--)
    {
      printf("%d",x);
    }
    printf("\n");
   }
}

    
