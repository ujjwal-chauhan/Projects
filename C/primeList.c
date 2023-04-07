#include <stdio.h>

int main(  )
{
    int range, counter = 0;

    printf( "Enter a whole number = ");
    scanf( "%d", &range );

    printf( "The prime numbers from %d to %d are -->", 1, range );

    for( int i = 2; i <= range; i ++ )
    {
        for( int j = 2; j <= i / 2; j++ )
        {
            if( i % j == 0 )
            {
                counter = 1;
                break;
            }
            if( j == i / 2 )
            {
                break;
            }
        }

        if ( counter == 1 )
        {
            counter = 0;
            continue;
        }
        printf( "\n%d", i );
    }
}