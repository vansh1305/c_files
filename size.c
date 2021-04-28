#include<stdio.h>

void main()
{
    char e[25];

    gets(e);

    printf("SIZE OF INT = %d\n",sizeof(int));
    printf("SIZE OF FLOAT = %d\n",sizeof(float));
    printf("SIZE OF CHAR = %d\n",sizeof(char));
    printf("SIZE OF LONG INT = %d\n",sizeof(long int));
    printf("SIZE OF 25-STRING %s = %d\n",e,sizeof(e));
    printf("SIZE OF DOUBLE = %d",sizeof(double));
}
