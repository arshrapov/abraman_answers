#include <iostream>

int f ( double x) {
	if (x >= 0) {
		if ((int(x) % 2) == 0) { return 1;}
		else { return -1;}
	}
	else {
		return 0;
	}
	return 1;
}

int main () {
	using namespace std;
	double x; cin >> x;
	cout << f (x);
	return 0;
}
