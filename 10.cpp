#include <iostream>

// Write a C++ program to add all the numbers of an array of size 10.

using namespace std;

int main()
{
    int a[10], sum = 0;
    cout << "Enter Elements Of Array\n";
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }
    cout << "Sum of all the elements of given array is = " << sum;

    return 0;
}