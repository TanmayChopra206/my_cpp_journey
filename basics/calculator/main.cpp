#include <iostream>
#include <limits>
#include <cctype>

using namespace std;

int main() {
    double num1;
    double num2;
    char my_operator;

    cout << "Pick an operator (+, -, *, /): " << endl;
    while (!(cin >> my_operator) ||
           (my_operator != '+' && my_operator != '-' &&
            my_operator != '*' && my_operator != '/')) {
        cout << "Invalid operator. Please pick one from (+, -, *, /): " << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Pick the first number: " << endl;
    while (!(cin >> num1)) {
        cout << "Invalid input. Please enter a numeric value: " << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Pick the second number: " << endl;
    while (!(cin >> num2)) {
        cout << "Invalid input. Please enter a numeric value: " << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Result: ";

    switch (my_operator) {
        case '+':
            cout << num1 + num2 << endl;
            break;

        case '-':
            cout << num1 - num2 << endl;
            break;

        case '*':
            cout << num1 * num2 << endl;
            break;

        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
            } else {
                cout << num1 / num2 << endl;
            }
            break;

        default:
            cout << "An unexpected error occurred with the operator." << endl;
            break;
    }

    return 0;
}
