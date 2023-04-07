#include <iostream>

int main()
{
    int numArr[3];

    for( int i = 0 ; i < 3 ; i++ )
    {
        std::cout << "Enter number " << i + 1 << " : ";
        std::cin >> numArr[i]; 
    }
    int max = 0 ;
    for (int j = 0 ; j < 3 ; j++)
    {
        if (numArr [j] > max)
        {
            max = numArr [j] ; 
        }
    }

    std::cout << max << " is the greatest among the three.";

}