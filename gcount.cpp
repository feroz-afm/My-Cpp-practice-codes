#include <iostream>
#include <chrono>
using namespace std;

int main() {
    auto s = chrono::high_resolution_clock::now();   // start

    char buf[100];
    cout << "Enter text: "; cin.getline(buf, 100);
    cout << "Text: " << buf << "\nCount: " << cin.gcount() << endl;

    auto e = chrono::high_resolution_clock::now();   // end
    cout << "Time: " 
         << chrono::duration_cast<chrono::seconds>(e - s).count() 
         << " sec" << endl;
}