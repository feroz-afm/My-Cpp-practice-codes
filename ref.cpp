#include<iostream>
using namespace std;
int main ()
{
    int a= 500;
    int& refer =a;
    cout<< " The value of a is : " << a << endl;
    refer = 4544;
    cout<< " The value of refer is : " << a << endl;
    return 0;
}