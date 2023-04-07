#include <stdio.h>
#include <math.h>

#define R 6.4
#define M 6
#define max 100

int main()
{
    int num;

    printf( "Enter the number of observations = " );
    scanf( "%d", &num );

    int i;
    float height[max];
    float time[max];
    float g, G;

    printf( "Enter your observations -->\n\n" );
    for( i = 0; i < num ; i++ )
    {
        printf( "height%d = ", i + 1 );
        scanf( "%f", &height[i] );
        printf( "time%d = ", i + 1 );
        scanf( "%f", &time[i] );
        printf( "\n" );
    }

    printf( "|height\t|time\t|g\t|G(10e-11)|velocity|\n" );
    for( i = 0; i < num; i++ )
    {
        printf( "|%0.3f\t|%0.2f\t|%0.2f\t|%0.2f\t  |%0.2f    |\n", 
        height[i], time[i], ((2*height[i])/(time[i]*time[i])), 
        ((((2*height[i])/(time[i]*time[i])*R*R)/M))/10, ((2*height[i])/(time[i]*time[i])*time[i]));
        g += (2*height[i])/(time[i]*time[i]);
        G += (((2*height[i])/(time[i]*time[i])*R*R)/M)/10;
    }
    printf("     \t     \t|%0.2f\t|%0.2f\t  |     \t", ( g / num ), ( G / num ) );

    printf( "\n\ng(Actual) = 9.81 \nG(actual) = 6.67 * 10e-11" );
    printf( "\n\nPercentage error -->\n" );

    printf( "error(g) = %0.2f\nerror(G) = %0.2f", fabs(( ( ( (g / num) - 9.81 ) / 9.81) * 100 )),
     fabs(( ( ( G / num - 6.67 ) / 6.67 ) *100 )) );

    return 0;
}