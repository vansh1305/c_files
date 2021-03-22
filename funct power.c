#include<stdio.h>

int power(int,int);
void main()
{
    int b,p;

    printf("ENTER VALUE OF BASE : ");
    scanf("%d",&b);
    printf("ENTER VALUE OF POWER : ");
    scanf("%d",&p);

    printf("THE VALUE OF %d^%d = %d ",b,p,power(b,p));  //  actual argument
}
int power(int a,int c)  // formal argument
{
    int i , mul=1;

    for(i=1;i<=c;i++)
    {
        mul=mul*a;
    }

    return mul;
}
