// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 
//samuel knight repository practice

#include <iostream>
using namespace std;
#include <string>
#include <cstdint> //provides fixed length def for integer types to not depend on implimentation for primative types.
#define CAPACITY 5000//defines symbols to whater you want at the right (symbols called macros) this finds and replaces. Ex. Where the complier sees 'CAPACITY' it will replace with 5000.
#define DEBUG


int main(){
    
    int32_t large = CAPACITY;
    uint8_t small = 37;

#ifdef DEBUG
    cout << "About the perform the addition" << endl;
#endif

    large += small;
    cout << "The large number is " << large << endl;
    std::cout << std::endl << std::endl;
    return (0);
}
