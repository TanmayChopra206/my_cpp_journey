#include <iostream>
#include <limits>
#include <cctype>

using namespace std;

double CtoF(double celsius);
double FtoC(double Fahrenheit);

int main() {
    double temperature_value;
    char unit;

    cout << "Enter the temperature value: ";
    while (!(cin >> temperature_value)) {
        cout << "Invalid input. Please enter a numeric value: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Enter the unit (C for Celsius, F for Fahrenheit): ";
    while (!(cin >> unit) || (tolower(unit) != 'c' && tolower(unit) != 'f')) {
        cout << "Invalid unit. Please enter 'C' or 'F': ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    double converted_temperature;

    if (tolower(unit) == 'c') {
        converted_temperature = CtoF(temperature_value);
        cout << temperature_value << " Celsius is "
             << converted_temperature << " Fahrenheit." << endl;
    } else {
        converted_temperature = FtoC(temperature_value);
        cout << temperature_value << " Fahrenheit is "
             << converted_temperature << " Celsius." << endl;
    }

    return 0;
}

double CtoF(double celsius) {
    return celsius * 9.0 / 5.0 + 32;
}

double FtoC(double Fahrenheit) {
    return (Fahrenheit - 32) * 5.0 / 9.0;
}
