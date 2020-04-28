#include <iostream>

int main () {
	using namespace std;
	int n; cin >> n;
	if (n > 0) { cout << "Целое числo";}
        else if (n < 0) { cout << "Отрицательно число";}
	else {cout << "Число равно нулю";}
	cout << endl;	
	return 0;
}
