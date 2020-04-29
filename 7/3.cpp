#include <iostream>

int main () {
	using namespace std;
	int month; cin >> month;
	switch (month) {
		case 1,2,12:
			cout << "Winter";
			break;
		case 3,4,5:
			cout << "Autumn";
			break;
		case 6,7,8:
			cout << "Summer";
			break;
		case 9,10,11:
			cout << "Spring";
			break;
		default:
			cout << "Its not correct month";
	}
	cout << endl;
	return 0;
}
