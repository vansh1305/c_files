#include<stdio.h>

void main()
{
    char a[30],b;
    int i,j;

    printf("ENTER STRING : ");
    gets(a);

    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]==' ' && a[i+1]==' ')
        {
           for(j=i;a[j]!=NULL;j++)
           {
                   a[j]=a[j+1];
           }
               i--;

           }
        }


    printf("\n\n %s",a);
}
