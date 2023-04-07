#include <stdio.h>

int main(  )
{
    int number;

    printf( "Enter a whole number = ");
    scanf( "%d", &number );

    if( number == 1 )
    {
        printf( "%d is neither a prime nor a composite number", number );
        return 0;
    }

    if( number == 0 )
    {
        printf( "%d is a composite number", number );
        return 0;
    }


    for( int i = 2; i <= number / 2; i++ )
    {
        if( number % i == 0 )
        {
            printf( "%d is a composite number", number );
            return 0;
        }
    }
    printf( "%d is a prime number", number );
}