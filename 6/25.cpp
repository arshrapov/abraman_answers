#include <iostream>

double f (double x) {
	if (x <= 0) { return -x;}
	else if ((x >0 ) and (x < 2)){ return x * x;}
	return 4;
}

int main () {
	using namespace std;
	double x; cin >> x;
	cout << f (x);
	return 0;
}
