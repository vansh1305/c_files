#include<stdio.h>

void main()

{
    char a[30];
    int i,l,f=0,j;

    printf("ENTER STRING : ");
    gets(a);

    for(l=0;a[l]!=NULL;l++);

    for(i=0 , j=l-1 ; i<l/2 ; i++ , j--)
    {
        if(a[i]!=a[j])
        {
            f=1;
            break;
        }
    }

    if(f==1)
    {
        printf("STRING IS NOT  PELENDROM");
    }
    else if(f==0)
    {
        printf("STRING IS  PELENDROM");
    }
}
