#include <stdio.h>

double factorial ( int number )
{
    if( number == 1 || number == 0 )
    {
        return 1;
    }    

    return ( factorial( number - 1) * number );
}

int main()
{
    int number;
    printf( "Enter a number = " );
    scanf( "%d", &number );

    printf( "%d! = %f ",number, factorial( number ) );

    return 0;
}
