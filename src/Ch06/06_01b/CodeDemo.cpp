// Learning C++ 
// Exercise 06_01
// Opening a text file for reading, by Eduardo Corpeño 
//sam k

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ifstream inFile;
    string str;
    int number;
    char letter;

    inFile.open("people.txt");
    if (inFile.fail())
        cout << std::endl << "File not found!" << endl;
    else{
        while (!inFile.eof()){
            getline(inFile, str);
            cout << str << endl;
        }
        inFile.close();
    }
    
    cout << endl << endl;
    return (0);
}
