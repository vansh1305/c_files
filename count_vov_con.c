#include<stdio.h>

void main()
{
    char a[30];
    int i,vov=0,con=0;

    printf("ENTER STRING : ");
    gets(a);

    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
            {
                vov++;
            }
            else
            {
                con++;
            }
        }
    }

    printf("NO. OF VOVELS = %d\n",vov);

    printf("NO. OF CONSONANT = %d",con);
}
