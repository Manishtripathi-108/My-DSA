// Reverse the number and print it

#include <iostream>
using namespace std;

int main()
{

    int number, sum = 0, lastDigit, reverse = 0;

    cout << "Enter Number: ";
    cin >> number;

    while (number > 0)
    {
        lastDigit = number % 10;
        reverse = reverse * 10 + lastDigit;
        number /= 10;
    }

    cout << "Reversed Number: " << reverse << endl;

    return 0;
}