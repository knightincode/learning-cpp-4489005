// Learning C++ 
// Exercise 03_09
// Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main(){
    vector<int> primes;

    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(5);
    primes.push_back(7);
    primes.push_back(11);
    cout << "The vector has " << primes.size() << " elements." << endl;
    cout << "The element at index 2 is " << primes[2] << endl;
    //primes[2] = 13;
    cout << "The element at index 2 is " << primes[2] << endl;
    

    cout << endl << endl;
    return (0);
}
