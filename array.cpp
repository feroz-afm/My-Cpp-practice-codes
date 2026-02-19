#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];   // array declaration

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];   // input
    }

    cout << "Array elements are:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";   // show
    }

    return 0;
}
