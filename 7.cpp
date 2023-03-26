#include <iostream>

// Write a C++ program to calculate the square of a number

using namespace std;

int main()
{
    int num;
    cout << "Enter Number \n";
    cin >> num;
    int sq = num * num;
    cout << "Square of " << num << " is " << sq;
    return 0;
}