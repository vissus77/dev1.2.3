#include<stdio.h>
void main()
{
  char str1[20],str2[20],str3[20];
  int i,j;
  printf("Enter the string:1");
  scanf("%s",str1);
  printf("Enter the string:2");
  scanf("%s",str2);
  for(i=0;str1[i]!='\0';i++)
   {
     str3[i]=str1[i];
   }
    str3[i]=' ';
   for(j=0;str2[j]!='\0';j++)
    {
      str3[i+j+1]=str2[j];
    }
    str3[i+j+1]='\0';
  printf("The combined String is :%s",str3);
}

  
