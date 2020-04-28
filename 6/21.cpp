#include <iostream>

int main () {
	using namespace std;
	int x,y;
	cin >> x >> y;
	if (x == 0 and y == 0) {
		cout << 0;
	}
	else if (x == 0 ) {
		cout << 1;
	}
	else if (y == 0) {
	       	cout << 2;
	}
	else {
		cout << 3;
	}	
	return 0;
}
