#include <iostream>

int main () {
	using namespace std;
	int a,b;
	cin >> a >> b;
	if (b > a) {
		a = a + b;
		b = a - b;
		a = a - b;	
	}
	cout << a << " " << b << endl;
	return 0;
}
