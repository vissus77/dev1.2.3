#include<stdio.h>
void main()
{
  FILE *fp;
  char str[10],item[10];
  int number, quantity,i;
  float price,value;

  /*printf("Enter the file Name");
  scanf("%s", str);*/
  fp=fopen("str","w");
  printf("INPUT data");
  printf("ITEM    NUMBER   PRICE QUANTITY\n");
  for(i=0;i<3;i++)
{
  fscanf(stdin, "%s   %d   %f    %d", item,&number,&price,&quantity);
  fprintf(fp,"%s  %d   %f   %d", item,number,price,quantity);
}
fclose(fp);
  fp=fopen("str","r");
  for(i=0;i<3;i++)
{
  fscanf(fp, "%s   %d   %f    %d", item,&number,&price,&quantity);
  fprintf(stdout, "%s   %d    %f    %d \n", item,number,price,quantity);
}
  fclose(fp);
}








  
