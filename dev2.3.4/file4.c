#include<stdio.h>
void main()
{

  FILE *fp;
  int i,number,quantity;
  char item[10],str[10];
  float price;
  fp=fopen("str","r");
  for(i=0;i<3;i++)
{
  fscanf(fp, "%s   %d   %f    %d", item,&number,&price,&quantity);
  fprintf(stdout, "%s   %d    %f    %d", item,number,price,quantity);
}
  fclose(fp);
}
