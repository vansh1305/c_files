#include<stdio.h>

struct emp
{

    int id;
    char na[20];
    long int sal;

} e[5];

void main()
{

    int i,j;
    struct emp t;

    for(i=0;i<5;i++)
    {
        printf(" ENTER ID-NAME-SAL : ");
        scanf("%d %s %d",&e[i].id,e[i].na,&e[i].sal);
    }

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(e[i].sal > e[j].sal)
            {
                t=e[i];
                e[i]=e[j];
                e[j]=t;
            }
        }
    }

    for(i=0;i<5;i++)
    {
        printf("\n  %d  %s  %ld",e[i].id,e[i].na,e[i].sal);
    }

}
