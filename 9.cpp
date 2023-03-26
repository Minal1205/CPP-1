#include <iostream>

// Write a C++ program to find the maximum of two numbers.

using namespace std;

int main()
{
    int x, y;
    cout << "Enter Two Numbers\n";
    cin >> x >> y;
    if (x > y)
    {
        cout << x << " is greater than " << y;
    }
    else
    {
        cout << y << " is greater than " << x;
    }

    return 0;
}