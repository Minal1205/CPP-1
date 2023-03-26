#include <iostream>

// Write a C++ program to calculate the volume of a cuboid.

using namespace std;

int main()
{
    int l, b, h;
    cout << "Enter Length,Breadth,Height\n";
    cin >> l >> b >> h;
    int volume = l * b * h;
    cout << "Volume of cuboid is " << volume;

    return 0;
}