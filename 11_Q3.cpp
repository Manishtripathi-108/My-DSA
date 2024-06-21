/*
Write a program that uses nested loops to display the following pattern:
A
B C
D E F
G H I J

What and How This Do:
                1. The program prompts the user to enter the number of rows.
                2. It uses nested loops to print a pattern of increasing letters of the alphabet.
                3. The outer loop iterates over each row, while the inner loop prints the letters for each row.
                4. The letter starts from 'A' and increments with each printed character.
*/

#include <iostream>
using namespace std;

int main()
{
    int rows;
    char alpha = 'A';

    // Prompt the user to enter the number of rows
    cout << "Enter number of Rows: ";
    cin >> rows;

    // Outer loop to iterate through each row
    for (int i = 1; i <= rows; i++)
    {
        // Inner loop to print the letters in each row
        for (int j = 0; j < i; j++)
        {
            cout << alpha++ << " ";
        }

        // Move to the next line after printing the letters in the current row
        cout << endl;
    }

    return 0;
}