#include <iostream>

int main () {
	using namespace std;
	double a,b;
	cin >> a >> b;
	if (a > b) {
		a = a + b;
		b = a - b;
		a = a - b;
	}
	cout << a << " " << b << endl;
	return 0;
}
