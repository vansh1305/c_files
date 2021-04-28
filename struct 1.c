#include<stdio.h>

struct emp
{
    int id;
    char na[20];
    long int sal;
}e={1,"vansh",50000},t,r,k;

void main()
{
  struct emp p;

  printf(" ENTER ID-NAME-SAL : ");
  scanf("%d %s %ld",&p.id,p.na,&p.sal);

  printf("\n\n  %d  %s  %ld",e.id,e.na,e.sal);
  printf("\n  %d  %s  %ld",p.id,p.na,p.sal);

}
