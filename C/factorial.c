#include <stdio.h>

int main ()
{
    int num, i, fact = 1;

    printf( "Enter the number to find it's factorial = " );
    scanf( "%d", &num );

    for( i = 1; i < num; i++ )
    {
        fact *= i;
    }

    printf( "%d! = %d", num, fact );
}