#include <iostream>

int main () {
	using namespace std;
	int N;
	cin >> N;
	cout << (N/100)*100 + (N%100)/10 + (N%10)*10 << endl;
	return 0;
}
