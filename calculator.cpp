#include <iostream>
#include <sstream>

using namespace std;

// Function to perform the requested arithmetic operation
int calculate(char op, int operand1, int operand2) {
    int result;  // Variable to store the result of the operation

    // Switch statement to handle different operations based on user input
    switch (op) {
        case '+':  // Addition
            result = operand1 + operand2;
            break;
        case '-':  // Subtraction
            result = operand1 - operand2;
            break;  
        case '*':  // Multiplication
            result = operand1 * operand2;
            break;
        case '/':  // Division
            result = operand1 / operand2;
            break;
        case '%':  // Modulus (remainder after division)
            result = operand1 % operand2;
            break;
        default:  // Error handling if an unsupported operation is entered
            cout << "I don't recognize the operation" << endl;
            return 0;  // Return 0 if the operation is invalid
    }

    return result;  // Return the result of the operation
}

int main() {
    char operation;  // Variable to store the operation input by the user
    int operand1, operand2;  // Variables to store the two operands entered by the user

    // Prompt the user to enter an operation
    cout << "Enter operation: ";
    cin >> operation;

    // Prompt the user to enter two operands
    cout << "Enter two operands: ";
    cin >> operand1 >> operand2;

    // Call the calculate function to perform the operation
    int result = calculate(operation, operand1, operand2);

    // If the result is not zero (meaning a valid operation was performed), display the result
    if (result != 0) {
        cout << operand1 << " " << operation << " " << operand2 << " = " << result << endl;
    }

    return 0;  // Return 0 to indicate the program ran successfully
}
