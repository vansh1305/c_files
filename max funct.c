#include<stdio.h>

int max(int[]);
void main()
{
    int a[5],i;

    for(i=0;i<5;i++)
    {
        printf("ENTER %d NUM : ",i+1);
        scanf("%d",&a[i]);
    }

    max(a);

    printf("\n\n %d is maximum number.",max(a));
}
int max(int x[])
{
    int i,max;

    max=x[0];

    for(i=1;i<5;i++)
    {
        if(max<x[i])
        {
            max=x[i];
        }
    }
    return max;
}
