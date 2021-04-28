#include<stdio.h>
void main()
{
    int num[10];
    int sum=0;

    for(int i=0;i<10;i++)
    {
        printf("ENTER %d NUM : ",(i+1));
        scanf("%d",&num[i]);
    }

    printf("\n\n");

    for(int i=0;i<10;i++)
    {
        sum=sum+num[i];

    }

    printf("SUM OF 10 = %d",sum);
}
