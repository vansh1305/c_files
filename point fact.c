#include<stdio.h>

void main()
{
    int no,f=1;
    int *p,*q;

    p=&no;
    q=&f;

    printf("ENTER VALUE : ");
    scanf("%d",p);

    while(*p>=1)
    {
        *q=(*q)*(*p);
        --*p;
    }

    printf("FACTORIAL = %d",*q);
}
