#include <stdio.h>

void main()
{
    char na[30];
    int i,l;

    printf(" ENTER STRING : ");
    gets(na);

    printf("\n  %s \n\n",na);
    for(i=0;na[i]!=NULL;i++)
    {
        printf("\n %c",na[i]);
    }

    for(l=0;na[l]!=NULL;l++);

    printf("\n\n LEN = %d",l);
}
