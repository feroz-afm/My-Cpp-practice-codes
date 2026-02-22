#include<iostream>
using namespace std;

int main()
{
    cout << "Enter any char: ";
    char ch = cin.get();   // First character input

    cout << "Entered char is: '" << ch << "'" << endl;

    cin.get();  // This will clear the newline character

    cout << "Enter another char: ";
    char ch2 = cin.get();   // Second character input

    cout << "Entered char is: '" << ch2 << "'" << endl;

    return 0;
}