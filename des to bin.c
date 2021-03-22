#include <stdio.h>

void main()

{

    int n,a[10];
    int rev,r,f=0,i=0;

    printf("ENTER THE VALUE : ");
    scanf("%d",&n);

    while(n>=1)
    {
        r=n%2;
        a[i++]=r;
        n=n/2;
    }

    printf("\n\n BINARY ==> ");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}
