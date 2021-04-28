#include<stdio.h>
void main()
{
    char a[30];
    int i,l,j,f=0;
    char *p;
    int *q;

    p=a;
    q=&f;

    printf("ENTER THE STRING : ");
    gets(p);

    for (l=0;a[l]!=NULL;l++);

    for(i=0,j=l-1;i!=l/2;i++,j--)
    {
        if(*(p+i)!=*(p+j))
        {
            *q=0;
            break;
        }
        else
        {
            *q=1;
        }
    }

    if(*q==1)
    {
        printf(" %s IS PANENDROM",p);
    }
    else
    {
        printf(" %s IS NOT PANENDROM",p);
    }
}
