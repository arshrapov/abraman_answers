#include <iostream>

int main () {
	using namespace std;
	double a,b,c;
	cin >> a >> b >> c;
	if (((a < b) && (b < c)) or ((a > b) && (b > c))) {
		a = a * 2;
		b = b * 2;
		c = c *2;
	}
	else {
		a = -a;
		b = -b;
		c = -c;
	}
	cout << a << " " << b << " " << c << endl;
	return 0;
}
