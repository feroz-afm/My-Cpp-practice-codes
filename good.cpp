#include <iostream>
using namespace std;
int main() {
	int num;
	cout << "Enter an integer: ";
	cin >> num;
	if (cin.good()) {
		cout << "Valid input. Given number: " << num << endl;
	} else {
		cout << "Invalid input. Input number is not an integer" << endl;
	}
	return 0;
}