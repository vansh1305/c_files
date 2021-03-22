#include<stdio.h>
void main()
{
    int n,sum=0;
    int i;
    int *p,*q;

    p=&n;
    q=&sum;

    printf("ENTER NUMBER : ");
    scanf("%d",p);

    for(i=1;i<*p;i++)
    {
        sum=0;
        if(*p%i==0)
        {
            *q=*q+i;
        }
    }
    if(*q==*p)
    {
        printf("%d is prime",*p);
    }
    else
    {
        printf("%d is not prime",*p);
    }
}
