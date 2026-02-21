#include <iostream>
using namespace std;

int main(){
     int num1;
     cout << "Enter number num1: ";
     cin >> num1;
     cout << "Num1: " << num1 << endl;

     int num2, num3;
     cout << "Enter the numbers num2 and num3: ";
     cin >> num2 >> num3;
     cout << "Num2: " << num2 << ", Num3: " << num3
          << "\n"
          << "Sum: " << num1 + num2 + num3 << endl;
     return 0;
}