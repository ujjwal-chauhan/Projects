#include <stdio.h>

int main ()
{
    int num, i, sum = 0;

    printf( "Enter how many even numbers to add = " );
    scanf( "%d", &num );

    for( i = 0; i < num; i++ )
    {
        sum += 2 * i;
    }

    printf( "The sum of first %d even natural numbers is %d", num, sum );
}