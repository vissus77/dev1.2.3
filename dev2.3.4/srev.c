#include<stdio.h>
void main()
{
  char str1[20],str2[20];
  int count=0,i,j;
  printf("Enter the string");
  scanf("%s",str1);
   for(i=0;str1[i]!='\0';i++)
   {
     count+=1;
   }
   for(j=count-1;j>=0;j--)
   {
     str2[count-j-1]=str1[j];
   }
   printf("The reverse os string is: %s", str2);
}
    
