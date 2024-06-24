/*
? WAP to convert a binary number to its decimal equivalent.
? For example, binary number 1011 is equivalent to decimal 11.
*
? What and how This program will work?
*         The program will take a binary number as input from the user.
*         It will convert the binary number to its decimal equivalent.
*         The program will then print the decimal equivalent.
*
? Summary: This program converts a binary number to its decimal equivalent.
*         The program uses a function to calculate a raised to the power of b.
*         It then uses this function to convert the binary number to its decimal equivalent.
*         The program then prints the decimal equivalent.
*/

#include <iostream>
using namespace std;

// Function to calculate a raised to the power of b
int power(int a, int b)
{
    int res = 1;
    for (int i = 0; i < b; i++)
    {
        res *= a;
    }
    return res;
}

// Function to convert a binary number (given as an integer) to its decimal equivalent
int binToDec(int a)
{
    int dec = 0, rem, i = 0;
    while (a > 0)
    {
        rem = a % 10;               // Get the last digit (0 or 1)
        dec += rem * power(2, i++); // Convert to decimal and add to result
        a /= 10;                    // Remove the last digit
    }
    return dec;
}

int main()
{
    int num;

    // Prompt the user to enter a binary number
    cout << "Enter a binary number: ";
    cin >> num;

    // Convert binary to decimal and print the result
    cout << "Decimal equivalent: " << binToDec(num) << endl;

    return 0;
}
