#include <iostream>

int days (int years) {
	if ((years % 4 == 0) or ((years % 100 == 0) and (years % 400 != 0))){ return 366;}  
	return 365;
}

int main () {
	using namespace std;
	int n; cin >> n;
	cout << days (n);
	return 0;
}
