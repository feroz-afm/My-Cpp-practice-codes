#include <iostream>
using namespace std;
int main() {

    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
     
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
	
        // Displaying array elements
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}