/*
? Write a program to calculate the value of nCr using functions.
? What is nCr?
*            nCr is the number of ways to choose r items from n items without repetition and without order.
*            nCr = n! / (r! * (n - r)!)
*
*            Example:
*            n = 5, r = 2
*            nCr = 5! / (2! * (5 - 2)!)
*            nCr = 120 / (2 * 6)
*            nCr = 120 / 12
*            nCr = 10
*
*            Therefore, the value of 5C2 is 10.
*            it means that there are 10 ways to choose 2 items from 5 items without repetition and without order.
*/

#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int n, r;

    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;

    cout << "The value of nCr is " << nCr(n, r) << endl;

    return 0;
}