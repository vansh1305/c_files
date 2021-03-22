#include<stdio.h>

struct date
{
    int dd,mm,yy;
    struct time
    {
    int hr,mn,sc;
    }t;
}d;


void main()
{
    printf(" ENTER DATE : ");
    scanf("%d %d %d",&d.dd,&d.mm,&d.yy);

    printf(" ENTER TIME : ");
    scanf("%d %d %d",&d.t.hr,&d.t.mn,&d.t.sc);

    printf("\n\n DATE = %d/%d/%d",d.dd,d.mm,d.yy);
    printf("\n TIME = %d:%d:%d",d.t.hr,d.t.mn,d.t.sc);
}
