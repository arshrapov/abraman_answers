#include <iostream>

int main () {
	using namespace std;
	int K; cin >> K;
	switch (K) {
		case 1:
			cout << "Bad";break;
		case 2:
			cout << "Not udovletvoritelno";break;
		case 3:
			cout << "Udovletvoritelno";break;
		case 4:
			cout << "Good";break;
		case 5:
			cout << "Excellent!";break;
	}
	cout << endl;
	}
	return 0;
}
