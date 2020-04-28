#include <iostream>

int main () {
	using namespace std;
	int a,b,c,min;
	cin >> a;
	min = a;
	cin >> b;
	if (b < min){min=b;}
	cin >> c;
	if (c < min){min=c;}
	cout << min;
	return 0;
}
