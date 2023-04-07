# include <iostream>
# include <cmath>

using namespace std;

int main ()
{
	double x;
	int n;
	double* numArr = new double[n + 1];
	
	cout << "Enter x:";
	cin >> x;
	cout << "Enter n:";
	cin >> n;
	
	for(int i = 0; i < n + 1; i++)
	{
		numArr[i] = pow(x, i);
	}
	long long sum = 0;
	for(int j = 0; j < n + 1; j++)
	{
		sum = sum + numArr[j];
	}
	
	cout << "The sum of the series is: " << sum;
	
	return 0;
}
