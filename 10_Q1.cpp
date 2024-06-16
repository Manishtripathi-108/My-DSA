//? Sum of digits of a number

#include <iostream>
using namespace std;

int main()
{
    int n, sumOfDigits = 0, lastDigit;

    cout << "Enter a Number: ";
    cin >> n;

    while (n > 0)
    {
        lastDigit = n % 10;
        sumOfDigits += lastDigit;
        n = n / 10;
    }

    cout << "Sum of Digits: "<< sumOfDigits;

    return 0;
}