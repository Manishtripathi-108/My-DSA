/*
Write a program to print an hourglass/star pattern:
*             *
* *         * *
* * *     * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *

What and How This Do:
                    1. The program prompts the user to enter the number of rows.
                    2. It uses nested loops to print an hourglass/star pattern.
                    3. The first set of nested loops creates the top half of the pattern.
                    4. The second set of nested loops creates the bottom half of the pattern.
*/

#include <iostream>
using namespace std;

int main()
{
    int rows;

    // Prompt the user to enter the number of rows
    cout << "Enter number of Rows: ";
    cin >> rows;

    // Loop to iterate through each row for the top half of the pattern
    for (int i = 1; i <= rows; i++)
    {
        // Print leading stars
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        // Print spaces between the stars
        for (int k = 1; k <= 2 * (rows - i); k++)
        {
            cout << "  ";
        }

        // Print trailing stars
        for (int l = 1; l <= i; l++)
        {
            cout << "* ";
        }

        // Move to the next line after printing the current row
        cout << endl;
    }

    // Loop to iterate through each row for the bottom half of the pattern
    for (int i = 1; i <= rows - 1; i++)
    {
        // Print leading stars
        for (int j = 1; j <= rows - i; j++)
        {
            cout << "* ";
        }

        // Print spaces between the stars
        for (int k = 1; k <= 2 * i; k++)
        {
            cout << "  ";
        }

        // Print trailing stars
        for (int l = 1; l <= rows - i; l++)
        {
            cout << "* ";
        }

        // Move to the next line after printing the current row
        cout << endl;
    }

    return 0;
}
