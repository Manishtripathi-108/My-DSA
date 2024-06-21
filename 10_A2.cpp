/*
WAP to print the multiplication table of a given number.

What This Do:
            The main function prompts the user to enter a number.
            It then displays the multiplication table of that number from 1 to 10.

*/

#include <iostream>
using namespace std;

int main()
{

    int num;

    cout << "Enter a Number: ";
    cin >> num;

    cout << "The Multiplication Table of " << num << " is: " << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}