// Learning C++ 
// Exercise 04_02
// Switch Statements, by Eduardo Corpeño 
//samuel k

#include <iostream>
using namespace std;

int main(){
    float num1, num2, result;
    char operation;

    std::cout << "Enter number 1: " << std::flush;
    std::cin >> num1;
    std::cout << "Enter number 2: " << std::flush;
    std::cin >> num2;
    std::cout << "Choose operation [ + - * / ]: " << std::flush;
    std::cin >> operation;

    // switch goes here
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            result = num1 + num2;
            break;

    }

    std::cout << "The result is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
