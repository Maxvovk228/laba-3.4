#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	if (( x <= 0 && y <= x + R && y>=0) ||
		( x >= 0 && y >= sqrt ( R * R - x * x ) && y >= 0) ||
		( x <= 0 && y >= sqrt (R * R - x * x) && y <= 0)
		)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}