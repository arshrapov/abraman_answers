#include <iostream>

int main () {
	using namespace std;
	int n, i=0,b=0,m=0;
	while (i < 3) {
	cin >> n;
	if (n > 0) {b++;}
	else if (n < 0) {m++;}
	i++;
	}
	cout << b << endl;
	cout << m << endl;
	return 0;
}
