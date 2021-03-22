#include<stdio.h>

void main()

{
    int a[10],b[10],c[10],i;

    for(i=0;i<10;i++)
    {
        printf("ENTER VALUE OF 1ST'S %d ELEMENT ARRAY : ",i+1);
        scanf("%d",&a[i]);

        printf("ENTER VALUE OF 2ND'S %d ELEMENT ARRAY : ",i+1);
        scanf("%d",&b[i]);

        printf("\n");

        c[i]=a[i]+b[i];

        printf("SUM OF %d ELEMENTS OF BOTH ARRAY = %d\n",(i+1),c[i]);

        printf("\n");
    }

}
