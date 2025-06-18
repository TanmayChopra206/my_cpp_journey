/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

class rectangle{
    
    private:
    double length;
    double width;
    
    public:
    
    rectangle(double l, double w):length(l),width(w){
        
    }
    
    double area(){
        return length*width;
        
    }
    
    double perimeter(){
        return 2*(length+width);
    
    }
    
    

};

int main(){
    
    rectangle my_rectangle(4.1,3.0);
    
    cout << my_rectangle.area();
    
    
    



    return 0;
}
