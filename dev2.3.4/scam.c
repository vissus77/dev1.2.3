#include<stdio.h>
void main()
{
  char str1[20], str2[20],  str3[20];
  int i,count=0;
  printf("Enter the Two string:");
  scanf("%s%s",str1,str2);
  
  
i=0;
  while(str1[i]==str2[i]&&str1[i]!='\0'&&str2[i]!='\0')
  i++;  

  if(str1[i]=='\0'&&str2[i]=='\0')

  printf("Entered strings are equal:" );
  else
  printf("Entered strings are Not equal:" ); 
}

