#include <stdio.h>

struct emp
{
    int id;
    char na[20];
    long int sal;
}e;



union ump
{
    int id;
    char na[20];
    long int sal;
}u;

void main()
{

    printf("\n\n SIZE OF EMP = %d",sizeof(e));
    printf("\n SIZE OF UNION = %d",sizeof(u));

}
