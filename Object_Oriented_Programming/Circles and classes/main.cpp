/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159;

class circle{
    private:
    double radius;
    
    public:
    
    circle(double rad):radius(rad){
        
    }
    
    double area(){
        return PI * pow(radius,2);
        
    }
    
    double circumference(){
        return 2*PI*radius;
    }
    
};

int main()
{ 
    circle my_circle(4.0);
    cout << my_circle.area();


    return 0;
}
