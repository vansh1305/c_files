#include<stdio.h>

void main()

{
    int a[10],count=0,i,n;

    for(i=0;i<10;i++)
    {
        printf("ENTER %d NUMBER : ",i+1);
        scanf("%d",&a[i]);
    }

    printf("\nENTER NUMBER YOU WANT TO CHANGE :\n");
    scanf("%d",&n);

    printf("\nENTER NUMBER : \n");
    scanf("%d",&count);

    printf("\n");

    for(i=0;i<10;i++)
    {
        if(a[i]==n)
        {
            a[i]=count;
        }
    }

    for(i=0;i<10;i++)
    {
        printf("FINEL NUMBER = %d: \n",a[i]);
    }
}
