#include <iostream>

int main () {
	using namespace std;
	int n; cin >> n;
	double a,b;
	switch (n) {
		case 1:
			cout << a + b;
			break;
		case 2:
			cout << a - b;
			break;
		case 3:
			cout << a * b;
			break;
		case 4:
			cout << a / b;
			break;
		default:
			cout << "Unknown operator";
	}

	cout << endl;
	return 0;
}
