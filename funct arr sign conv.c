#include<stdio.h>

void sym(int[]);

void main()
{
    int a[5],i;

    for(i=0;i<5;i++)
    {
        printf("ENTER %d VALUE : ",i+1);
        scanf("%d",&a[i]);
    }

    sym(a);

    for(i=0;i<5;i++)
    {
        printf("  %d",a[i]);
    }

}

void sym(int x[])
{
    int i,chang=0;

    for(i=0;i<5;i++)
    {
        chang=x[i]-2*x[i];
        x[i]=chang;
        chang=0;
    }
}
