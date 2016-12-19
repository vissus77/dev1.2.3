#include<stdio.h>
#include<string.h>
struct demo
{
  char name[10];
  char adder[10];
  int id;
};
void main()
{
  struct demo det;

  /*det.name[10]="bobby";
 
  det.adder[10]="kakinada";*/
  strcpy(det.name,"bobby");
  strcpy(det.adder,"penuguduru");

  det.id=1234;
  printf("%s  %s %d",det.name,det.adder,det.id);
}

