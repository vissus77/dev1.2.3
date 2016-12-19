#include<stdio.h>
void main(){

 int i, j, x;

for(i=10;i>0;i--)
{
  for (j=0;j<i;j++)
{
   printf(" ");
}
   for(x=0;x<=10-j;x++)
{ 
    printf (" *");

}
printf("\n");
}
}
