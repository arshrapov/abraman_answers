#include <iostream>

int main () {
	using namespace std;
	int N;
	cin >> N;
	cout << "mul = " << (N/10) * (N%10) << endl;
	cout << "sum = " << (N/10) + (N%10) << endl;
	return 0;
}
