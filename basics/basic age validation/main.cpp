
#include <iostream>

using namespace std;

int main()
{
    int age;
    
    cout << "Please enter your age: ";
    
    while (!(cin >> age)){
        cout << "Invalid input, Try again ";
        cin.clear();
        cin.ignore(10000, '\n'); // Remove bad input
    }
    
    cout << "Your entered " << age;

    return 0;
}
