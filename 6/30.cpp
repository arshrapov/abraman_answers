#include <iostream>

int main () {
	using namespace std;
	int n; cin >> n;
	if (n % 2 == 0) { cout << "чётное ";}
	else { cout << "нечётное ";}
	if (n < 10) {cout <<  "однозначное ";}
	else if (n < 100) { cout << "двузначное ";}
	else { cout << "трехзначное ";}
	cout << "число" << endl;
	return 0;
}
