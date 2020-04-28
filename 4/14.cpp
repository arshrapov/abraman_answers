#include <iostream>

int main () {
	using namespace std;
	int N;
	cin >> N;
	cout << (N%100)/19 + (N%10)*10 << endl;	
	return 0;
}
