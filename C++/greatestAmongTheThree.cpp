#include <iostream>
#include <cmath>
#include <chrono>
#include <thread>

using namespace std;
 	
int main()
{
	double num1, num2, num3;
	cout << "Enter number 1:";
	cin >> num1;
	cout << "Enter number 2:";
	cin >> num2;
	cout << "Enter number 3:";
	cin >> num3;
	if(num1 > num2 && num1 > num3)
	{
		cout << num1 << "is the greatest number" << endl;
	}
	else if(num2 > num1 && num2 > num3)
	{
		cout << num2 << "is the greatest number" << endl;
	}
	else
	{
		cout << num3 << " is the greatet number" << endl;
	}
	
	return 0;
}
