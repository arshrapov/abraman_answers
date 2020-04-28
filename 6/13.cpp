#include <iostream>

int main () {
	using namespace std;	
	int a,b,c,max,min;
	cin >> a;
	max = min = a;
	cin >> b;
	if (b <= min) {min = b;}
	else if (b >= max) {max = b;}
	cin >> c;
	if (c <= min) {min = c;}
	else if (c >= max) {max = c;}
	cout << a + b + c - max - min;
	return 0;
}
