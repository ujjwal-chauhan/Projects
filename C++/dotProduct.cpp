# include <iostream>
# include <cmath>

using namespace std;

int main ()
{
	double vec1, vec2, arg, product;
	cout << "Enter vector 1:" << endl;
	cin >> vec1;
	cout << "Enter vector 2:" << endl;
	cin >> vec2;
	cout << "Enter angle between them:" << endl;
	cin >> arg;
	product = vec1 * vec2 * cos(arg);
	cout << vec1 <<"." << vec2 <<" = " << product;
	
	return 0;
}
