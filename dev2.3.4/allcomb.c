#include<stdio.h>
#include<string.h>
void main()
{
  char str1[20],str2[20],str3[20];
  int i,j,count=0,k=0,p,len=0,n,t=6;

   while(t!=0)
{
  clrscr(); 
  printf("chose one value from Below Dists\n1 to String Reverse\n2 to String concatination \n3 to String Comparision\n4 to String Palandrome Or Not\n5 to Prime Number\ncc6. to terminate the programe\n");

  printf("Enter the Integer Number from LIst");
  scanf("%d",&n);
  
  switch(n)
  {
    case 1:

  printf("Enter the string");
  scanf("%s",str1);
   for(i=0;str1[i]!='\0';i++)
   {
     len+=1;
   }
   for(j=len-1;j>=0;j--)
   {
     str2[len-j-1]=str1[j];
   }
   printf("The reverse os string is: %s", str2);
   break;
    
   case 2:

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
   break;
      
  case 3: 
   
  printf("Enter the Two string:");
  scanf("%s%s",str1,str2);
  
   i=0;
  while(str1[i]==str2[i]&&str1[i]!='\0'&&str2[i]!='\0')
  i++;  

  if(str1[i]=='\0'&&str2[i]=='\0')

  printf("Entered strings are equal:" );
  else
  printf("Entered strings are Not equal:" ); 
    break;
  
  case 4:
  
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
      break;
   case 5:
 
   
   printf("Enter the N number");
   scanf("%d",&p);

    for(i=2;i<p;i++)
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
    break;
    case 6:
    t=0;    
    break;
    default:
     printf("YOU Enter Wrong digt");
     break;
   }
}
}

   
    
 
  

  
 
  

    

    
    
 
