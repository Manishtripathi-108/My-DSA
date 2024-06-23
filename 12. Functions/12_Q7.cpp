//? WAP to print all prime numbers up to a given number using functions.

#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int a)
{
    if (a <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}

// Function to print all prime numbers up to a given number
void printPrimesUpTo(int x)
{
    for (int i = 2; i <= x; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int num;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> num;

    // Print all prime numbers up to the entered number
    printPrimesUpTo(num);

    return 0;
}
