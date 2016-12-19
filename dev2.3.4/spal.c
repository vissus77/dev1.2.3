#include<stdio.h>
void main()
{
  char str1[20],str2[20];
  int i,j,k,temp=0,count=0;
  printf("Enter the String:");
  scanf("%s",str1);

  for(i=0;str1[i]!='\0';i++)
{  
 count+=1;
} 
 for(j=count-1;j>=0;j--)
{ 
  str2[count-j-1]=str1[j];
} 
  str2[count-j]='\0';
k=0;
 while(str1[k]==str2[k]&&str1[k]!='\0'&&str2[k]!='\0')
  k++;  

   if(str1[k]=='\0'&&str2[k]=='\0')

   printf("Given Number is Palndrom");
   else
   printf("Given Number is Not Palndrom");
}
