#include <iostream>
using namespace std;
int main()
{
	double a;
	double b;
	double x; 
	double c; 
	double F; 
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	if (a < 0 && x != 0)
		F = a * (x*x) + (b*b)*x;
	else
		if (a > 0 && x == 0)
			F = x - a/(x-c);
		else
			F = 1 + x/c;
	cout << "F = " << F << endl;
	cin.get();
	return 0;
}