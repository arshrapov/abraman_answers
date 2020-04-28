#include <iostream>

int main () {
	using namespace std;
	int a,b,c;
	cin >> a >> b >> c;
	if (a == c) { cout << 2;}
	if (a == b) { cout << 3;}
	if (c == b) { cout << 1;}
	return 0;
}
