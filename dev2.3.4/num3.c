#include<stdio.h>
void main()
{
 int i, j,l, x, n,p,count=0;
 printf("Enter the Nth Number");
 scanf("%d",&n);
 p=n;
 while (p!=0)
 {   
  p/=10;
  count+=1;
 }
  for(i=n;i>0;i--)
  {
    for(j=0;j<i-1;j++)
    {
      printf(" ");
  
     }
     
    for(x=1;x<=n-j;x++)
    { 
     for(l=0;l<count;l++)
       {
       printf(" ");
       }

      printf("%d",x);
 
    }
    printf("\n");
   }
}


