#include<stdio.h>

void main()
{
    char a[30],b;
    int i,j;

    printf("ENTER STRING : ");
    gets(a);

  //  printf("ENTER CHAR YOU WANNA DELETE : ");
  //  scanf("%c",&b);

    for(i=0;a[i]!=NULL;i++)
    {
     //   if(a[i]==b)
        if(a[i]==' ')
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
