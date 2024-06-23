//? Write a program to find the factorial of a number using functions.

#include <iostream>
using namespace std;

int factorial(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "The factorial of " << num << " is " << factorial(num) << endl;

    return 0;
}