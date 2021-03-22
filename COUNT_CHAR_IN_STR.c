#include<stdio.h>

void main()
{
    char a[30],b,c;
    int i;

    printf("ENTER STRING : ");
    gets(a);

    printf("ENTER CHARACTER YOU WANNA REPLACE : ");
    scanf("%c %c",&b,&c);


    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]==b)
        {
            a[i]=c;
        }
    }

    printf("\n\n %s",a);
}
