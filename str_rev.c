#include<stdio.h>

void main()
{
    char a[30],b[30],t;
    int i,l,j;

    printf("ENTER STRING : ");
    gets(a);

    for(l=0;a[l]!=NULL;l++);

   /* for(i=0,l=l-1;l>=0;l--,i++)
    {
        b[i]=a[l];

    }
    b[i]=NULL;

    printf("\n\n REVERSE = %s",b);*/

    for(i=0,j=l-1;i<l/2;i++,j--)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;

    }

    printf("\n\n  %s",a);

}
