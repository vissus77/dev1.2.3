#include<stdio.h>
void main()
{
 int n,i,j,k;
 printf("Enter the N number");
 scanf("%d",&n);
 for(i=2;i<n;i++)
 {
  k=0;
  for(j=2;j<=i/2;j++)
   {
    if(i%j==0)
   k=1;
   }
  if(k==0)
    printf("%d,",i);
  }
}

   
    
 
  


