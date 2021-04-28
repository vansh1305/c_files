#include <stdio.h>

void main()
{
    FILE *fp;
    char fna[20];
    char ch;//=' ';

    printf(" ENTER FILE NAME : ");
    scanf("%s",fna);

    fp = fopen(fna,"r");

    if(fp==NULL)
    {
        printf("\n\n FILE DOESN'T EXIST");
    }
    else
    {
        printf("\n\n FILE EIXSTS ");

        while(ch!=EOF)
        {
            ch=getc(fp);
            printf("%c",ch);
        }

    }

    fclose(fp);
}
