#include <iostream>

// Write a C++ program to calculate the area of a circle

using namespace std;

int main()
{
    float radius;
    cout << "Enter Radius\n";
    cin >> radius;
    float area = 3.14 * radius * radius;
    cout << "Area of circle with radius " << radius << " is " << area;

    return 0;
}