#include<stdio.h>
void main()
{

 int i, j, x;

for(i=5;i>0;i--)
{
     for(j=0;j<i;j++)
{

      printf(" *");
}
   
printf ("\n");     

for (x=0;x<=5-j;j++)
{
    printf(" ");
}


}
}
