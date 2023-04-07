# include <iostream>

using namespace std;

int main ()
{
    cout << "Program to find the sum and average of a list of numbers --> "  << endl ;

    int len ;
    cout << "Enter how many numbers you want to enter : " ;
    cin >> len ;

    int sum = 0 , acc;
    for (int i = 0 ; i < len ; i++)
    {
        cout << "Enter number " << i + 1 << " : " ;
        cin >> acc ;
        sum += acc ;
    }

    cout << "SUM : " << sum << endl ;
    cout << "AVERAGE : " << (long double)sum / len << endl;

    return 0;
}