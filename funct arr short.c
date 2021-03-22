#include<stdio.h>

void change(int[]);

void main()
{
    int a[5]={10,20,30,40,50},i;

        printf("\n\n BEFORE =   ");
        for(i=0;i<5;i++)
        {
            printf("  %d",a[i]);
        }

    change(a);

    printf("\n\n AFTER =  ");
    for(i=0;i<5;i++)
    {
        printf("  %d",a[i]);
    }
}

void change(int x[])
{
    x[0]=1000;
    x[1]=2000;
    x[2]=3000;
    x[3]=4000;
    x[4]=5000;
}
