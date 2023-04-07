# include <iostream>

using namespace std;

double fib(double n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		return fib (n - 2) + fib (n - 1);
	}
}

int main ()
{
	double n, fibSum = 0;
	cout << "Enter how many fibonacci numbers you want to sum : ";
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		fibSum += fib(i);
	}
	
	cout << "The sum of first " << n << " Fibonacci numbers is : " << fibSum << endl;
	cout << "And the " << n << "th fibonacci number is " << fib(n);
	
	return 0;
}
