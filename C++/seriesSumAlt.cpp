# include <iostream>
# include <cmath>

using namespace std;

int main ()
{
	double x, sum;
	int n;
	
	cout << "Enter x:";
	cin >> x;
	cout << "Enter n:";
	cin >> n;
	
	sum = (pow(x, n + 1) - 1)/(x - 1);
	
	cout << "The sum of the series is " << sum;
	
	return 0;
}
