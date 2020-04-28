#include <iostream>

int main () {
	using namespace std;
	int N;
	cin >> N;
	cout << N/100 + (N%100)/10*10 + (N%10)*100 << endl;
	return 0;
}
