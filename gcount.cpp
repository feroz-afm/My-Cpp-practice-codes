#include <iostream>
using namespace std;
int main() {
    char buffer[100];
    cout << "Enter text: ";
    cin.getline(buffer, 100);
    cout << "Entered Text: " << buffer << endl;
    cout << "Count of characters: " << cin.gcount() << endl;
    return 0;
}