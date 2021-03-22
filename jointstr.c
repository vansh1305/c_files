#include <stdio.h>

void main()
{
    char a[30], b[30], i,l;

    printf("ENTER YOUR FIRST NAME : ");
    gets(a);
    printf("ENTER YOUR LAST NAME : ");
    gets(b);

    for(l=0;a[l]!='\0';l++);

    a[l]=' ';

    for(l=l+1,i=0;b[i]!=NULL;i++,l++)
    {
        a[l]=b[i];
    }
    a[l]=NULL;

    printf("\n\n  %s",a);


}
