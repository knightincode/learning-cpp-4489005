// Learning C++ 
// Exercise 03_02
// Classes, by Eduardo Corpeño 
//samuel 

#include <iostream>
#include <string>
using namespace std;



int main(){
    cow my_cow("Hildy", 7, cow_purpose::pet);
    std::cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose() << " cow." << std::endl;
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
