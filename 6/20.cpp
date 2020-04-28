#include <iostream>
#include <cmath>

int main () {
	using namespace std;
	int a,b,c;
	cin >> a >> b >> c;
	if (abs(a-b) < abs(a-c)) {
		cout << b << " " << abs(a-b) << endl;
	}
	else {
		cout << c << " " << abs(a-c) << endl;
	}
	return 0;
}
