#include <iostream>
#include <cmath> 

using namespace std;

class Circle {
private:
    double radius;
    double area;

public:
    void acceptRadius() {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
    }

    void calculateArea() {
        area = M_PI * pow(radius, 2); 
    }
    void displayResult() {
        cout << "\nThe area of the circle with radius " << radius << " is: " << area << endl;
    }
};

int main() {

    Circle circle;
    circle.acceptRadius();
    circle.calculateArea();
    circle.displayResult();
    return 0;
}
