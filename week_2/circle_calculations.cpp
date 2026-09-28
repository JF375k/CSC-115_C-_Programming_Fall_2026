#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Constant value for pi
    const double PI = 3.14159265359;

    // Variables used for the circle calculations
    double radius;
    double angle;
    double area;
    double circumference;
    double arcLength;

    // Ask the user to enter the radius and central angle
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    cout << "Enter the central angle in degrees: ";
    cin >> angle;

    // Calculate the area of the circle
    area = PI * radius * radius;

    // Calculate the circumference of the circle
    circumference = 2 * PI * radius;

// Calculate the arc length
    arcLength = (angle / 360.0) * 2 * PI * radius;

    // Display the results
    cout << "Circle Calculations" << endl;
    cout << "-------------------" << endl;
    cout << "Radius: " << radius << endl;
    cout << "Angle: " << angle << " degrees" << endl;

    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;
    cout << "Arc Length: " << arcLength << endl;

    return 0;
}