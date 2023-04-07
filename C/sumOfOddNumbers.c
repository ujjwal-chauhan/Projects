#include <stdio.h>

int main ()
{
    int num, i, sum = 0;

    printf( "Enter how many odd numbers to add = " );
    scanf( "%d", &num );

    for( i = 0; i < num; i++ )
    {
        sum += ( 2 * i + 1 );
    }

    printf( "The sum of first %d odd natural numbers is %d", num, sum );
}