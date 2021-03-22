#include<stdio.h>

void main()
{
    int a[10],i,max,min;

    for(i=0;i<10;i++)
    {
        printf("ENTER THE NUMBER : ");
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];

    for(i=0;i<10;i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
        if(a[i] < min)
        {
            min=a[i];
        }
    }


    printf("MAXIMUM = %d\n",max);
    printf("MINIMUM = %d",min);

}
