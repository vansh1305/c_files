#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10],i,x,count=0;
    int *p,*q,*r;

    p=&a[0];
    q=&count;
    r=&x;

    for(i=0;i<10;i++)
    {
        printf("ENTER NUMBER : ");
        scanf("%d",(p+i));
    }

    printf("\n\n ENTER VALUE : ");
    scanf("%d",r);

    for(i=0;i<10;i++)
    {
        if(*(p+i)==*r)
        {
            ++*q;
        }
    }

    printf("\n\n COUNT = %d",*r);

    getch();
}
