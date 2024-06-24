// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 
//samuel knight repository practice

#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    
    auto a = 8;
    auto b = 12345678967;
    auto c = 3.514;
    auto d = 3.14;
    auto e = true;
    auto f = 'd';
    auto g = "C++ Rocks!";

    cout << "The type of a is " << typeid(a).name() << endl;
    cout << "The type of b is " << typeid(b).name() << endl;
    cout << "The type of c is " << typeid(c).name() << endl;
    cout << "The type of d is " << typeid(d).name() << endl;
    cout << "The type of e is " << typeid(e).name() << endl;
    cout << "The type of f is " << typeid(f).name() << endl;
    cout << "The type of g is " << typeid(g).name() << endl;

    std::cout << std::endl << std::endl;
    return (0);
}
