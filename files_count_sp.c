#include<stdio.h>

void main()
{
    char f1[30],ch=' ';
    FILE *fp;
    int upp=0,low=0,space=0,dig=0,lin=0,spc=0;

    printf("ENTER FILE NAME : ");
    gets(f1);

    fp=fopen(f1,"r");

    while(ch!=EOF)
    {
        ch = getc(fp);

        if(ch<='z' && ch>='a')
            low++;

        else if(ch<='Z' && ch>='A')
            upp++;

        else if(ch<='9' && ch>='0')
            dig++;

        else if(ch==' ')
            space++;

        else if(ch==10)
            lin++;

        else
            spc++;

    }

    printf("\n UPPER CHAR = %d",upp);
    printf("\n LOWER CHAR = %d",low);
    printf("\n SPACES = %d",space);
    printf("\n LINES = %d",lin);
    printf("\n DIGETS = %d",dig);
    printf("\n SPECIAL CHAR = %d",spc);

    fclose(f1);

}
