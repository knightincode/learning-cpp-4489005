// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño
//Samuel Knight Repository 

#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string str; //hold user input
    cout << "Enter your name: " << flush;
    cin >> str; //captures input from keyboard
    cout << "Nice to meet you " + str << "!" <<  endl; //displays string variable

    cout << endl << endl;
    return (0);
}
