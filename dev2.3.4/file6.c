#include<stdio.h>
void main()
{
  FILE *fp;
  int stn,tmarks,index,i;
  char sname[20],sclass[10],sgrade[10];
  fp=fopen("stl","r");
  for(i=0;i<3;i++)
   {
   fscanf(fp,"%d  %d   %s   %s    %d    %s",&index,&stn,sname,sclass,&tmarks,sgrade);
   fprintf(stdout, "%d  %d   %s   %s    %d    %s\n",index,stn,sname,sclass,tmarks,sgrade);
   }
   fclose(fp);
}

