#include <iostream>

int main () {
	using namespace std;
	int n; cin >> n;
	double m; cin >> m;
	switch (n) {
		case 1:
			cout << m;
			break;
		case 2:
			cout << m / 100000;
			break;
		case 3:
			cout << m / 1000;
			break;
		case 4:
			cout << m * 1000;
			break;
		case 5:
			cout << m * 100;
			break;
		default:
			cout << "Unknown operator";
	}
	cout << endl;
	return 0;
}
