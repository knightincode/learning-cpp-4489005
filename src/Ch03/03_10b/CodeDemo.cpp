// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>
#include "cow.h"
using namespace std;

int main(){
    vector <cow> cattle;

    cattle.push_back(cow("Betty", 6, cow_purpose::meat));
    cattle.push_back(cow("Libby", 4, cow_purpose::hide));
    cattle.push_back(cow("Trudy", 5, cow_purpose::dairy));
    cattle.push_back(cow("Betsy", 2, cow_purpose::pet));

    cout << "The first cow is " << cattle.begin() -> get_name() << endl;
    cout << "At index 1 we have " << cattle[1].get_name() << endl;
    cout << "Next to last cow is " << prev(cattle.end(), 2) -> get_name() << endl;
    cout << "The last cow is " << (cattle.end() - 1) -> get_name() << endl;


    
    cout << endl << endl;
    return (0);
}
