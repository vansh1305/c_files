#include<stdio.h>

void sorting(int[]);

void main()
{
    int a[10],i;

    for(i=0;i<10;i++)
    {
        printf("ENTER %d VALUE : ",i+1);
        scanf("%d",&a[i]);
    }

    sorting(a);

    for(i=0;i<10;i++)
    {
        printf("  %d",a[i]);
    }
}

void sorting(int x[])
{
    int i,j,t;

    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(x[i]>x[j])
            {
                t=x[i];
                x[i]=x[j];
                x[j]=t;
            }
        }
    }
}
