// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>
using namespace std;

int a,b = 5;  //one line comment
/*
these are multi-line enclosed by  
*/

int main(){
    bool myFlag;
    a = 7;
    myFlag = false;
    std::cout << "Hi There!" << std::endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "Flag = " << myFlag << endl;
    myFlag = true;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "Flag = " << myFlag << endl;
    unsigned int positive;
    positive = b - a;
    cout << "b - a unsigned = " << positive << endl;

    
    std::cout << std::endl << std::endl;
    return (0);
}
