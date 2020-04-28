#include <iostream>

int main () {
	using namespace std;
	int a,b;
	cin >> a >> b;
	if (a != b) {a = a + b; b = a;}
	else {a = b = 0;}
	cout << a << " " << b << endl;
	return 0;
}
