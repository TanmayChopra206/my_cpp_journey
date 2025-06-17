#include <iostream>

using namespace std;

int recursive_factorial_calculator(int number){
    
    if(number == 0){    //special case if number is 0
        return 1;
    }
    int base = 1;   //initialise a base case to avoid infinite recursion
    
    for (int i = number; i >= 1; i--){
        base = base * i;
    }
    
    return base;
}

int main(){
    cout << recursive_factorial_calculator(10) << endl;
    cout << recursive_factorial_calculator(3) << endl;
    cout << recursive_factorial_calculator(1) << endl;
    cout << recursive_factorial_calculator(0) << endl;
    


    return 0;
}
