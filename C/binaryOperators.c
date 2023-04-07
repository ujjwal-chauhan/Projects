#include <stdio.h>
#include <conio.h>

int main()
{
    int num1 = 1, num2 = 0;

    printf( "%d\t%d\t%d\t%d\t%d\t%d\t",num1^num2,num1|num2,num1&num2,num1<<1,num1>>1,~0 );


    char c = getchar();

    putchar(c);


    return 0;
}