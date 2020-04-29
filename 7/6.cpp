#include <iostream>

int main () {
	using namespace std;
	int n; cin >> n;
	double a; cin >> a;
	switch (n) {
		case 1:
			cout << a / 10;
			break;
		case 2:
			cout << a * 1000;
			break;
		case 3:
			cout << a;
			break;
		case 4:
			cout << a / 1000;
			break;
		case 5:
			cout << a / 100;
			break;
		default:
			cout << "Unknown operator";
	
	}
	cout << endl;
	return 0;
}
