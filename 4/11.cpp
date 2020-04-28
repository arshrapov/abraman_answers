#include <iostream>

int main (){
	using namespace std;
	int N;
	cin >> N;
	cout << "sum= " << (N/100) + (N%100)/10 + (N%10) << endl;
	cout << "mul= " << (N/100) * (N%100)/10 * (N%10) << endl;
	return 0;
}
