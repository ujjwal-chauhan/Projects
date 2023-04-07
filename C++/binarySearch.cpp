# include <iostream>
# include <cmath>

using namespace std ;

int* sort(int len, int arr[])
{
    for(int i = 0 ; i < len ; i++)
    {		
	    for(int j = i + 1 ; j < len ; j++)
	    {
		    if(arr [i] > arr[j])
		    {
			    int temp  = arr[i];
			    arr[i] = arr[j];
			    arr[j] = temp;
		    }
	    }
    }
    return arr ;
}

int bSearch(int arr[], int len, int val, int L = 0)
{
    L = 0;
    int R = len - 1;
    if (L > R)
    {
        return NULL ;
    }

    int m = floor((L + R) / 2) ;
    if (arr[m] == val)
    {
        return m ;
    }
    else if (arr[m] > val)
    {
        return bSearch(arr, m , val) ;
    }
    else if (arr[m] < val)
    {
        return bSearch(arr, len , val , m + 1) ;
    }
    
    return NULL ;
}

int main ()
{ 
    int len , val;
    cout << "Enter the length of your list : " ;
    cin >> len ;

    int numArr[len] ;
    for (int i = 0 ; i < len ; i++)
    {
        cout << "Enter number " << i + 1 << " : " ;
        cin >> numArr [i] ;
    }
    int* arr = numArr ;
    arr = sort (len ,numArr) ;
    
    cout << "Enter what number's position you want : " ;
    cin >> val ;
	
	cout << "{" ;
	for (int i = 0 ; i < len - 1 ; i++)
    {
        cout << numArr[i] << ", " ;   
    }
    cout << numArr[len - 1] ;
    cout << "}" ;
        
    cout <<  endl << val << " is at " << bSearch(arr , len, val) ;

    return 0 ;
}
