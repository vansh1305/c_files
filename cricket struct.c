#include<stdio.h>

struct cricket
{
    char pna[20];
    char cna[20];
    int run;
}p[5];

void main()
{
    int i,j;
    struct cricket t;

    for(i=0;i<5;i++)
    {
        printf("ENTER PLAYER NAME-COUNTRY NAME-RUN : ");
        scanf("%s %s %d",p[i].pna,p[i].cna,&p[i].run);
    }

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(p[i].run < p[j].run)
            {
                t=p[i];
                p[i]=p[j];
                p[j]=t;
            }
        }
    }

    for(i=0;i<5;i++)
    {
        printf("%s %s %d\n",p[i].pna,p[i].cna,p[i].run);
    }
}
