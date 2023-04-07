#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	int n;
	int* numArr = new int[n];
	
	cout << "Enter fizbuzz series length:";
	cin >> n;
	
	for(int h = 0; h < n; h++)
	{
		numArr[h] = h + 1;
	}
	
	for(int i = 0; i < n; i++)
	{
		if (numArr[i] % 3 == 0 && numArr[i] % 5 == 0)
		{
			cout << endl << "fizzbuzz";
		}
		else if (numArr[i] % 3 ==0)
		{
			cout <<endl << "fizz";
		}
		else if (numArr[i] % 5 == 0)
		{
			cout << endl << "buzz"; 
		} 
		else
		{
			cout << endl << numArr[i];
		}      
	}
}
