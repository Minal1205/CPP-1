#include <iostream>

// Write a C++ program to calculate an average of 3 numbers.

using namespace std;

int main()
{
    float x, y, z;
    cout << "Enter three numbers to find their average\n";
    cin >> x >> y >> z;
    float avg = (x + y + z) / 3;
    cout << "Average of " << x << " , " << y << " and " << z << " is " << avg;
    return 0;
}