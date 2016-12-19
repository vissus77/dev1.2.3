#include<stdio.h>
void main()
{
 int i, j, x, n;
 printf("Enter the Nth Number 0 to 9");
 scanf("%d",&n);
 for(i=n;i>0;i--)
  {
    for(j=1;j<=i;j++)
    {
      printf("%2d",j);
      
    }
    printf("\n");
  
    for(x=0;x<=n-i;x++)
    {
      printf(" ");
    }
    
   }
}
