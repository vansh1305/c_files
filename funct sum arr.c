#include<stdio.h>

int sum(int[]);

void main()
{
    int a[5],i;

    for(i=0;i<5;i++)
    {
        printf("ENTER %d VALUE : ",i+1);
        scanf("%d",&a[i]);
    }

    printf(" SUM OF ARR = %d",sum(a));

}

int sum(int x[])
{
    int add=0,i=0;

    for(i=0;i<5;i++)
    {
        add=add+x[i];
    }

    return add;
}
