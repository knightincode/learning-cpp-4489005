// Learning C++ 
// Exercise 04_01
// If Statements, by Eduardo Corpeño 
//samuel knight

#include <iostream>
using namespace std;

int main(){

    int a = 1023;
    bool flag = false;

    if (a > 1000)
        cout << "WARNING: a is over 1000. " << endl;

    if  (a % 2 == 0)
        cout << "a is even." << endl;
    else {
        cout << "a is odd." << endl;
    }
    

    cout << endl << endl;
    return (0);
}
