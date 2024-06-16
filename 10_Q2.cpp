//? sum of od digits in a number

#include <iostream>
using namespace std;

int main()
{

    int number, sum = 0, lastDigit;

    cout << "Enter Number: " << endl;
    cin >> number;

    while (number > 0)
    {
        lastDigit = number % 10;

        // What this do : if number is odd then perform its sum
        if (lastDigit % 2 != 0)
        {
            sum += lastDigit;
        }
        number /= 10;
    }

    cout << sum << endl;

    return 0;
}