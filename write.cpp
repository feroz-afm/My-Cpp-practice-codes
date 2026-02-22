#include <iostream>
using namespace std;
int main(){

	char text[] = "Welcome to Tutorialspoint.";
	cout << "Full text: " << text << endl;
	cout << "First 7 characters: ";
	cout.write(text, 15);
	cout << endl;
	return 0;
}