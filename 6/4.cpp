#include <iostream>

int main () {
	using namespace std;
	int n,i = 0,cnt = 0;
	while (i < 3) {
		cin >> n;
		if (n > 0) {cnt++;}
		i++;
	}
	cout << cnt;
	return 0;
}
