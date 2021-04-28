#include<stdio.h>

void main()

{
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("ENTER THE VALUE OF A%d%d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("ENTER THE VALUE OF B%d%d : ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

    printf("\n\n");

//    for(i=0;i<3;i++)
//    {
//        for(j=0;j<3;j++)
//        {
//           c[i][j]=a[i][j]+b[i][j];
//
//            printf("SUM OF A%d%d AND B%d%d = %d\n",i+1,j+1,i+1,j+1,c[i][j]);
//        }
//    }

    printf("\n\nSUM OF TWO METRICS IS :\n\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%4d",c[i][j]);
        }
        printf("\n");
    }
}
