#include <stdio.h>

void main()
{
    char f1[30],f2[30],ch = ' ';
    FILE *fp,*fq;

    printf("enter file 1 : ");
    gets(f1);
    printf("enter file 2 : ");
    gets(f2);

    fp=fopen(f1,"r");
    fq=fopen(f2,"w");

    while(ch!=EOF)
    {
        ch=getc(fp);

        if(ch!=EOF)
        {
            if(ch<='z' && ch>='a')
            {
                ch=ch-32;
            }

            else if(ch<='Z' && ch>='A')
            {
                ch=ch+32;
            }

            putc(ch,fq);
        }
    }
    fclose(fp);
    fclose(fq);

}
