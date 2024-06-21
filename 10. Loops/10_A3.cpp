/*
Write a program to check whether a number is Armstrong number or not.
An Armstrong number is a number that is equal to the sum of its own digits raised to the power of the number of digits.

What This Do:
            The main function takes a number from the user and calculates the sum of the cubes of its digits.
            It then compares the sum with the original number and displays the result.
*/

#include <iostream>
using namespace std;

int main()
{
    int num, lastDigit, sum = 0;

    cout << "Enter a Number: ";
    cin >> num;

    // store the number in a temporary variable
    int temp = num;

    while (temp > 0)
    {
        lastDigit = temp % 10;
        sum += lastDigit * lastDigit * lastDigit;
        temp /= 10;
    }

    if (sum == num)
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not an Armstrong Number" << endl;
    }

    return 0;
}