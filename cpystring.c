#include<stdio.h>

void main()
{
    char s1[30],s2[30],i;

    printf("ENTER STRING-1 : ");
    gets(s1);

    printf("\n STRING 1 : %s \n",s1);

    for(i=0;s1[i]!='\0';i++)
    {
        s2[i]=s1[i];
    }
    s2[i]=NULL;

    printf("\n STRING 2 : %s \n",s2);

}
