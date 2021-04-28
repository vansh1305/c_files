#include <stdio.h>

 //  >   asc
 //  < desc
void main()
{
    int a[10],i,j,t;

    for(i=0;i<10;i++)
    {
        printf(" ENTER NO : ");
        scanf("%d",&a[i]);
    }

    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i] < a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }

    for(i=0;i<10;i++)
    {
        printf("  %d",a[i]);
    }


}
