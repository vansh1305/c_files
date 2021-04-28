#include<stdio.h>

void main()
{
    char a[30],c;
    int i;

    printf("ENTER STRING : ");
    gets(a);

    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]>=97 && a[i]<=122)
        {
            a[i]=a[i]-32;

        }
        else if(a[i]>=65 && a[i]<90)
        {
            a[i]=a[i]+32;
        }
    }

    printf("\n\n %s",a);
}
