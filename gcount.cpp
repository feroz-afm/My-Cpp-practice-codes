#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {
    auto start = high_resolution_clock::now(); // start time
    char buffer[100];
    cout << "Enter text: ";
    cin.getline(buffer, 100);
    cout << "Entered Text: " << buffer << endl;
    cout << "Count of characters: " << cin.gcount() << endl;

    auto stop = high_resolution_clock::now(); // end time
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "Execution Time: " << duration.count() << " ms" << endl;

    return 0;
}