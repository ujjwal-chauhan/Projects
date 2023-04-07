# include <iostream>

using namespace std ;

int main ()
{
    cout << "Program to sort a list --> " << endl ;

    int len ;
    cout << "Enter the length of your list : " ;
    cin >> len ;

    int numArr [len] ;
    for (int i = 0 ; i < len ; i++)
    {
        cout << "Enter number " << i + 1 << " : " ;
        cin >> numArr [i] ;
    }

    char order ;

    cout << "Enter what order you want the list in -->" << endl ;
    cout << "ASCENDING : A" << endl ;
    cout << "DESCENDING : D" << endl << ">";
    cin >> order ;

for(int i=0 ; i < len ; i++)
{		
	for(int j = i + 1 ; j < len ; j++)
	{
		if(numArr [i] > numArr[j])
		{
			int temp  = numArr[i];
			numArr[i] = numArr[j];
			numArr[j] = temp;
		}
	}
}

    if (order == 'A')
    {
        cout << "ARRAY IN ASCENDING ORDER --> " << endl << "{";
            for (int i = 0 ; i < len - 1 ; i++)
            {
                cout << numArr[i] << ", " ;   
            }
            cout << numArr[len - 1] ;
            cout << "}" ;
            return 0 ;
    }

    else if (order == 'D')
    {
        cout << "ARRAY IN DESCENDING ORDER --> " << endl << "{";
            for (int i = len - 1 ; i > 0 ; i--)
            {
                cout << numArr[i] << ", " ;   
            }
            cout << numArr[0] ;
            cout << "}" ;
            return 0 ;
    }

    cout << "INVALID INPUT!!" ;
    return 0 ;
}