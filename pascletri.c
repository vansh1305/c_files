#include<stdio.h>

void main()
{
    int a[6][6],i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j==0 || j==i)
            {
                a[i][j]=1;
            }
            else
            {
            a[i][j]=a[i-1][j]+a[i-1][j-1];
            }

        }
    }
    for(i=0;i<5;i++)
    {
        for(j=i;j<5;j++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("%2d",a[i][j]);

        }
        printf("\n");
    }


}
