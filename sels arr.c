#include<stdio.h>

void main()
{
    int sels[5][4],i,j,sr=0,sc=0,gt=0;

    printf("ITAMS ARE \nTV=1\tFRIDGE=2\nAC=3\tMOBILE=4\n");

    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("ENTER THE SALES OF SALES GIRL NO %d ITEM NO %d :",j+1,i+1);
            scanf("%d",&sels[i][j]);
        }
    }

    for(i=0;i<4;i++)
    {
        sr=0;
        sc=0;
        for(j=0;j<3;j++)
        {
            sr=sr+sels[j][i];
            sc=sc+sels[i][j];
        }
        sr=sr+sels[j][i];
        gt+=sr;
        sels[i][j]=sc;
        sels[j+1][i]=sr;
    }
    sels[i][j]=gt;

    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%4d",sels[i][j]);
        }
        printf("\n");
    }

}
