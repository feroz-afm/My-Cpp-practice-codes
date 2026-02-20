#include<iostream>
using namespace std;
string function ( int n){
    if(n%2==0) return " The number is Even !";
    else return "The number is odd !";
}
int main ()
{
 int a ;
 cin>> a ;
 cout << function (a) << endl;
 return 0;
}