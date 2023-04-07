#include <stdio.h>

int main()
{
    int num, reverse = 0;

    printf( "Enter a number to reverse = " );
    scanf( "%d", &num );

    while( num != 0 )
    {
        reverse = reverse * 10 + ( num % 10 );
        num /= 10;
    }

    printf( "Reversed = %d", reverse );

    return 0;
}