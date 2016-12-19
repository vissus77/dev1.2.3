#include<stdio.h>
void main(){

 int i, j, x,n=10;

	for(i=n;i>0;i--)
	{
		for (j=0;j<i-1;j++)
		{
  		printf(" ");
		}
  	for(x=0;x<n-j;x++)
		{ 
   	 printf ("*");
		}
		printf("\n");
	}
}
