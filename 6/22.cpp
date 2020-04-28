#include <iostream>

int flat (int x, int y) {
	if (x > 0 and y > 0) {
		return 1;
	}
	else if (x < 0 and y > 0) {
		return 2;
	}
	else if (x < 0 and y < 0) {
		return 3;
	}
	else if (x > 0 and y < 0) {
		return 4;
	}
	return 0;
}

int main () {
	using namespace std;
	int x,y;
	cin >> x >> y;
	cout << flat (x,y);
	return 0;
}
