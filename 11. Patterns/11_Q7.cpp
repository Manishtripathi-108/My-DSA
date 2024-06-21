/*
Write a program to print a diamond pattern:
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

What and How This Do:
1. The program prompts the user to enter the number of rows.
2. It uses nested loops to print a diamond pattern of asterisks.
3. The first set of nested loops creates the top half of the diamond, including the middle row.
4. The second set of nested loops creates the bottom half of the diamond.
*/

#include <iostream>
using namespace std;

int main()
{
    int rows;

    // Prompt the user to enter the number of rows
    cout << "Enter number of Rows: ";
    cin >> rows;

    // Loop to iterate through each row for the top half of the diamond
    for (int i = 1; i <= rows; i++)
    {
        // Spaces for centering the asterisks
        for (int j = 1; j <= rows - i; j++)
        {
            cout << "  ";
        }

        // Asterisks to form the top half of the diamond
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "* ";
        }

        // Move to the next line after printing the current row
        cout << endl;
    }

    // Loop to iterate through each row for the bottom half of the diamond
    for (int i = 1; i < rows; i++)
    {
        // Spaces for centering the asterisks
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }

        // Asterisks to form the bottom half of the diamond
        for (int k = 1; k <= 2 * (rows - i) - 1; k++)
        {
            cout << "* ";
        }

        // Move to the next line after printing the current row
        cout << endl;
    }

    return 0;
}
