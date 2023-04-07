# include <iostream>

using namespace std;

int main()
{
	int num1, numArr[num1];
	cout << "Enter number:";
	cin >> num1;
	for(int i = 0; i < num1; i++)
	{
		numArr[i] = i + 1;
	}
	double factorial = 1;
	for(int j = 0; j < num1; j++)
	{
		factorial = factorial * numArr[j];
	}
	cout << num1 <<"!= " << factorial; 
	
	return 0;
}
