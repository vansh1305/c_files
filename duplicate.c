#include <stdio.h>

void main()
{
    char f1[20],f2[20];
    FILE *fp,*fq;
    char ch=' ';

    printf(" enter file1 : ");
    scanf("%s",f1);
    printf(" enter file2 : ");
    scanf("%s",f2);

    fp = fopen(f1,"r");
    fq = fopen(f2,"w");

    while(ch!=EOF)
    {
        ch = getc(fp);
        putc(ch,fq);
    }

    fclose(fp);
    fclose(fq);

}
