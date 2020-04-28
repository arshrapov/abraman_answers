#include <iostream>

int main () {
	using namespace std;
	int a,b;
	cin >> a >> b;
	if (a == b) {a = b = 0;}
	else if (a > b) {b = a;}
	else {a = b;}
	cout << a << " " << b << endl;	
	return 0;
}
