//? sum of od digits in a number

#include <iostream>
using namespace std;

int main()
{

    int number, sum = 0, lastDigit;

    cout << "Enter Number: ";
    cin >> number;

    cout << "Odd Digits in reverse order: ";

    while (number > 0)
    {
        lastDigit = number % 10;

        // What this do : if number is odd then perform its sum
        if (lastDigit % 2 != 0)
        {
            cout << lastDigit << ", ";
            sum += lastDigit;
        }

        number /= 10;
    }

    cout << "\nSum of Odd Digits: " << sum << endl;

    return 0;
}