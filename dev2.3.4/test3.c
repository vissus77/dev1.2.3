#include<stdio.h>
#include<math.h>
void main()
{
 int i, j,l, x, n,count=0;
   int p;
 printf("Enter the Nth Number 0 to 9");
 scanf("%d",&n);

p=n;
 while(n!=0)
 {    
  n/=10;
  count+=1;
printf ("%d",n);
 }
  printf("%d",count);
}

