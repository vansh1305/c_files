#include<stdio.h>
void rev(char[]);
void main()
{
    char a[30];

    printf("ENTER STRING : ");
    gets(a);

    rev(a);

    printf("\n\n  %s",a);
}
void rev(char x[30])
{
    int i,j,l,temp;

    for(l=0;x[l]!=NULL;l++);

    for(i=0,j=l-1;i<=l/2;i++,j--)
    {
        temp=x[i];
        x[i]=x[j];
        x[j]=temp;
    }
}
