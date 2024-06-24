/*
? WAP to convert a decimal number to its binary equivalent.
? For example, decimal number 10 is equivalent to binary 1010.

? How this works:
*           The program will take a decimal number as input from the user.
*           The program uses a function to calculate a raised to the power of b.
*           It then uses the decToBin function to convert the decimal number to its binary equivalent.
*           The program then prints the binary equivalent.
*/

#include <iostream>
using namespace std;

// Function to calculate a raised to the power of b
int power(int a, int b)
{
    int res = 1;                // Initialize result to 1
    for (int i = 0; i < b; i++) // Loop b times
    {
        res *= a; // Multiply res by a in each iteration
    }
    return res; // Return the result of a^b
}

// Function to convert a decimal number to its binary equivalent
int decToBin(int dec)
{
    int bin = 0;    // Initialize binary result to 0
    int rem, i = 0; // Initialize remainder and index for power of 10

    while (dec > 0)
    {
        rem = dec % 2;               // Get the remainder when dec is divided by 2 (0 or 1)
        bin += rem * power(10, i++); // Convert to binary and add to result
        dec /= 2;                    // Divide dec by 2 to remove the processed digit
    }

    return bin; // Return the binary equivalent
}

int main()
{
    int num;

    // Prompt the user to enter a decimal number
    cout << "Enter a Decimal: ";
    cin >> num;

    // Convert decimal to binary and print the result
    cout << "Binary equivalent : " << decToBin(num) << endl;

    // OR

    // Uncomment the following block to print binary equivalents for numbers 1 to 20
    /*
    for (int i = 1; i <= 20; i++)
    {
        cout << "Binary equivalent of " << i << " : " << decToBin(i) << endl;
    }
    */

    return 0;
}
