#include <stdio.h>

void main()
{
    char f1[20],f2[20];
    FILE *fp,*fq;
    char ch=' ',t;
    int i=0,j,l=0;
    char data[1000];


    printf(" enter file1 : ");
    scanf("%s",f1);
    printf(" enter file2 : ");
    scanf("%s",f2);

    fp = fopen(f1,"r");
    fq = fopen(f2,"w");

    while(ch!=EOF)
    {
        ch=getc(fp);
        data[i++]=ch;
    }
    data[i]=NULL;

    strrev(data);

    fputs(data,fq);

    fclose(fp);
    fclose(fq);


}
