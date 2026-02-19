#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (b != 0)
        cout << a / b << endl;
    else
        cout << "Division not possible" << endl;

    return 0;
}

