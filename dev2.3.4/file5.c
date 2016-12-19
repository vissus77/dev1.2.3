#include<stdio.h>
void main()
{
  FILE *fp;
  int stn,tmarks,index,i;
  char sname[20],sclass[10],sgrade[10];
  fp=fopen("stl","w");
  printf("Enter the Below details \n");
  printf("INDEX SNO  SNAME        SCLASS     TMARKS     SGRADE\n");
  for(i=0;i<3;i++)
  {
   fscanf(stdin,"%d%d%s%s%d%s", &index,&stn,sname,sclass,&tmarks,sgrade);
    printf("\n");
   fprintf(fp,"%d %d %s %s %d  %s\n", index,stn,sname,sclass,tmarks,sgrade);
  }
fclose(fp);

  fp=fopen("stl","r");
  for(i=3;i>0;i--)
   {
   fscanf(fp,"%d%d%s%s%d%s", &index,&stn,sname,sclass,&tmarks,sgrade);
   fprintf(stdout," INDEX= %d\nSTN= %d\nSNAME=%s\nSCLASS=%s\nTMARKS=%d\nSGRADE=%s\n", index,stn,sname,sclass,tmarks,sgrade);
   }
   fclose(fp);
}


