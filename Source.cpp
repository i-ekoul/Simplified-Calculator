/*
 * Calculator.cpp
 *
 *  Date: [19.05.2024]
 *  Author: [Emmalie Cole]
 */

#include <iostream>

using namespace std;

int main()  // Changed return type to int, as main should return an integer value
{
    char answer = 'Y';  // Initialized answer with 'Y' to start the loop
    while (answer == 'Y' || answer == 'y')  // Added check for both 'Y' and 'y' to make the program case-insensitive
    {
        cout << "Enter expression (e.g., 2 + 3): ";
        char operation;
        int op1, op2;
        cin >> op1 >> operation >> op2;  // Changed input order to match the expression (e.g., 2 + 3)

        if (operation == '+')  // Removed semicolon at the end of the if statement
            cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;
        else if (operation == '-')  // Added else if to avoid multiple conditions being true
            cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;
        else if (operation == '*')
            cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;
        else if (operation == '/')
            cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;
        else
            cout << "Invalid operation. Please enter +, -, * or /." << endl;  // Added default case to handle invalid operations

        cout << "Do you wish to evaluate another expression? (Y/N): ";
        cin >> answer;
    }
    return 0;  // Added return statement to indicate successful execution
}