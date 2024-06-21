/*
Write a program in C++ to generate the Fibonacci series up to a given number.

what This do:
            The program prompts the user to enter a number and then generates the Fibonacci series up to that number.
            The Fibonacci series is a sequence of numbers in which each number is the sum of the two preceding ones.
            The series starts with 0 and 1.

 */

#include <iostream>
using namespace std;

int main()
{
    int num, first = 0, second = 1, third;

    cout << "Enter a Number: ";
    cin >> num;

    cout << "Fibonacci Series: ";

    for (int i = 0; i < num; i++)
    {
        if (i <= 1)
        {
            third = i;
        }
        else
        {
            third = first + second;
            first = second;
            second = third;
        }
        cout << third << " ";
    }

    return 0;
}