/*
Write a program that uses nested loops to display the following right-aligned triangle pattern for a given number of rows:
    *
   **
  ***
 ****
*****

What and How This Do:
                    1. The program prompts the user to enter the number of rows.
                    2. It uses nested loops to print a right-aligned triangle pattern of asterisks.
                    3. The outer loop iterates over each row.
                    4. The inner loop prints spaces followed by asterisks to create the right alignment.
                    5. It prints spaces for positions that should be empty and asterisks for positions that form the triangle.
*/

#include <iostream>
using namespace std;

int main()
{
    int rows;

    // Prompt the user to enter the number of rows
    cout << "Enter number of Rows: ";
    cin >> rows;

    // Loop to iterate through each row
    for (int i = 1; i <= rows; i++)
    {
        // Inner loop to iterate through each column in the current row
        for (int j = 1; j <= rows; j++)
        {
            // Check for the position to print spaces or asterisks
            if (j <= rows - i)
            {
                cout << "  "; // Print space for alignment
            }
            else
            {
                cout << "*" << " "; // Print asterisk
            }
        }

        // Move to the next line after printing the current row
        cout << endl;
    }

    return 0;
}