#include <stdio.h>

void show(int[][3]);

void main()
{
    int a[3][3];
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" ENTER NO : ");
            scanf("%d",&a[i][j]);
        }
    }

    show(a);

}

void show(int a[][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",a[i][j]);
        }
    }

}
