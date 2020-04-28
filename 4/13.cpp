#include <iostream>

int main () {
	using namespace std;
	int N;
	cin >> N;
	cout << N/100 + (N%100)/10*10 << endl;	
	return 0;
}
