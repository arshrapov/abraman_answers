#include <iostream>
#include <cmath>

int f (int x){
	if ((x < -2) or (x > 2)) {
		return 2 * x;
	}
	else {
		return -3 * x;
	}
}

int main () {
	using namespace std;
	int x; cin >> x;
	cout << f (x);
	return 0;
}
