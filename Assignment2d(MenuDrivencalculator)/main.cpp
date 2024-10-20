#include <iostream>
using namespace std;

int main() {
    // Declare variables for the two numbers and the user's choice
    double num1, num2;
    char operation;

    // Input two numbers from the user
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Display the menu for arithmetic operations
    cout << "Choose an operation from the following menu:" << endl;
    cout << "+ : Addition" << endl;
    cout << "- : Subtraction" << endl;
    cout << "* : Multiplication" << endl;
    cout << "/ : Division" << endl;

    // Input the user's choice
    cout << "Enter your choice of operation (+, -, *, /): ";
    cin >> operation;

    // Perform the chosen operation
    switch (operation) {
        case '+':
            cout << "Result: " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
        break;
        case '-':
            cout << "Result: " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
        break;
        case '*':
            cout << "Result: " << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
        break;
        case '/':
            // Check for division by zero
                if (num2 == 0) {
                    cout << "Error: Division by zero is not allowed." << endl;
                } else {
                    cout << "Result: " << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
                }
        break;
        default:
            cout << "Invalid operation. Please choose from +, -, *, or /." << endl;
    }

    return 0;
}
