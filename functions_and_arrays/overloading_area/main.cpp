#include <iostream>

using namespace std;

 const double PI = 3.14; // declaring it in the global namespace so that it can be used globally

double calculate_Area(double side){
    double area = side*side;
    return area;
    
    
}

double calculate_Area(double length,double width){
    double area = length * width;
    return area;
}

double calculate_Area(double radius, bool iscircle){
    double area = PI * radius*radius;
    return area;
    
}

int main(){
    
    cout << "area of a square with side 3.2: " << calculate_Area(3.2) << endl;
    cout << "area of a rectangle with length 4 and width 3: " << calculate_Area(4.3,3.8) << endl;
    cout << "area of a circle with radius 5: " << calculate_Area(5,true);
    
    return 0;
    
}
