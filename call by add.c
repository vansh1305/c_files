#include <stdio.h>

void swap(int&,int&);

void main()
{
    int a,b;
    printf(" ENTER 2 NO : ");
    scanf("%d %d",&a,&b);

    swap(a,b);

    printf("\n\n A = %d",a);
    printf("\n B = %d",b);

}

void swap(int &x,int &y)
{
    x=x+y;
    y=x-y;
    x=x-y;
}
