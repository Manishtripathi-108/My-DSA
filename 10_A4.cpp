/*
WAP to print all prime numbers between 1 to n.

What This Do:
            The main function takes a number from the user and iterates from 2 to num.
            For each number, it checks if it is prime or not.
            If the number is prime, it is displayed on the console.
            The loop continues until the number entered by the user.
            The isPrime variable is used to keep track of whether the number is prime or not.
            The isPrime variable is set to true at the beginning of each iteration.
            If the number is not prime, the isPrime variable is set to false.
            The isPrime variable is reset to true at the end of each iteration.
            The loop continues until the number entered by the user.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, isPrime = true;

    cout << "Enter a Number greater than 2: ";
    cin >> num;

    for (int i = 2; i <= num; i++)
    {
        //? check if the number is prime
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << i << endl;
        }

        isPrime = true;
    }

    return 0;
}