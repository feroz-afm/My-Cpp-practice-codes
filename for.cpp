#include <iostream>
using namespace std;

int main(){
    int arr[5];
    int n = 5;
     
    cout << "Enter " << n << " array elements: ";
    for (int i = 0; i < n; i++){
        // Taking array elements input
        cin >> arr[i];
    }

    cout << "Array elements: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;