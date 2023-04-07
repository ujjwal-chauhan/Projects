#include <stdio.h>

int main()
{
    float income, tax = 0, taxableIncome;

    printf( "Enter your income = " );
    scanf( "%f", &income );

    taxableIncome = income;

    if( ( taxableIncome  >= 0 ) && ( taxableIncome < 500000 ) )
    {
        printf( "No tax" );
    }
    if( ( taxableIncome  > 500000 ) && ( taxableIncome <= 1000000 ) )
    {
        taxableIncome -= 500000;
        tax = 0.1 * taxableIncome;
    }
    if( ( taxableIncome > 1000000 ) && ( taxableIncome <= 2000000 ) )
    {
        taxableIncome -= 1000000;
        tax = 0.2 * taxableIncome + 50000 ;
    }
    if( taxableIncome > 2000000 )
    {
        taxableIncome -= 2000000;
        tax = 0.3 * taxableIncome + 250000;
    }

    printf( "Tax = %f \n Income after tax = %f", tax, income - tax );

    return 0;
}