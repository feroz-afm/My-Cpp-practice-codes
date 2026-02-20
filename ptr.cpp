#include <iostream>
using namespace std;

int main() {
   int a=20;
   //declare variable a
   int *p= &a;
   //assign pointer to a
   cout<<"Address of variable a: "<<p<<endl;
   cout<<"Value of variable a: "<<*p<<endl;

   return 0;
}