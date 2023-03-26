#include <iostream>

// Write a C++ program to swap values of two int variables without using third variable

using namespace std;

int main()
{
    int x = 3, y = 4;
    cout << "Values before swap is x = " << x << " and y = " << y << endl;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << "Values after swap is x = " << x << " and y = " << y;

    return 0;
}