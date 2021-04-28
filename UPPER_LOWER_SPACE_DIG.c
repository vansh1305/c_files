#include<stdio.h>

/*

A-Z   65-90
a-z   97 -122
space  32
esc 27
digits 48 - 57

*/

void main()
{
    char a[30];
    int i,up=0,low=0,dig=0,spac=0,sp=0;

    printf("ENTER STRING : ");
    gets(a);

    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]<='Z' && a[i]>='A')
        {
            up++;
        }
        else if(a[i]<='z' && a[i]>='a')
        {
            low++;
        }
        else if(a[i]==' ')
        {
            spac++;
        }
        else if(a[i]<='9' && a[i]>='0')
        {
            dig++;
        }
        else
        {
            sp++;
        }
    }
     printf("DIGITS = %d\n",dig);
     printf("UPER CASE ALF = %d\n",up);
     printf("LOWER CASE ALF = %d\n",low);
     printf("SPACE = %d\n",spac);
     printf("SPECIAL CHAR = %d\n",sp);
}
