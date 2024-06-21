/*
Calculate the factorial of a given number.

what This Do:
            This program prompts the user to enter a number and calculates its factorial.
            The factorial of a number is the product of all positive integers less than or equal to that number.
            The result is then displayed on the console.
*/

#include <iostream>
using namespace std;

int main()
{
    int num, factorial = 1;

    cout << "Enter a Number: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }

    cout << "The Factorial of " << num << " is: " << factorial << endl;

    return 0;
}
