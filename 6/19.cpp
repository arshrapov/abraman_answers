#include <iostream>

int main () {
	using namespace std;
	int a,b,c,d,i;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a != b) {
		if (b == c){
			i = 1;
		}
		if (a == c) {
			i = 2;
		}
	}
	cin >> d;
	if (d != c) {
		if (d == a || d == b) {
			i = 3;
		}
		if (c == a || c == b) {
			i =4;
		}
	}
	cout << "Index num is: " << i << endl;	
	return 0;
}
