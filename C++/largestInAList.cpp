# include <iostream>

using namespace std ;

int main ()
{
    cout << "Program to find the largest number in a list and its location --> " << endl ;

    int len ;
    cout << "Enter the length of your list : " ;
    cin >> len ;

    int numArr [len] ;
    for (int i = 0 ; i < len ; i++)
    {
        cout << "Enter number " << i + 1 << " : " ;
        cin >> numArr [i] ;
    }
    
    int max = 0 ;
    for (int j = 0 ; j < len ; j++)
    {
        if (numArr [j] > max)
        {
            max = numArr [j] ; 
        }
    }

    int pos = 0 ;
    for (int k= 0 ; k < len ; k ++)
    {
        if(max == numArr[k])
        {
            pos = k + 1 ;
            break;
        }
    }

    cout << "Number " << pos << " which is " << max << " was the largest " ;

    return 0;
}