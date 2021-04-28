#include<stdio.h>

void main()
{
    char a[30],b[30];
    int i,f=0;

    printf("ENTER FIRST STRING : ");
    gets(a);

    printf("ENTER SECOND STRING : ");
    gets(b);

    for(i=0;a[i]!=NULL || b[i]!=NULL;i++)
    {
        if(a[i]!=b[i])
        {
            f=a[i]-b[i];
            break;
        }
    }

    if(f>0)
    {
        printf("\n\n  %s is bigger",a);
    }
    else if(f<0)
    {
        printf("\n\n %s is bigger",b);
    }
    else if(f==0)
    {
        printf("\n\n BOTH ARE EQUAL");
    }
}
