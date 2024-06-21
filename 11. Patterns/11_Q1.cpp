/*
WAP to print the following pattern:
*
* *
* * *
* * * *

What This Do:
            1. Prompt the user to enter the number of rows.
            2. Use a nested loop to iterate through each row and print the asterisks in each row.
            3. The outer loop iterates through each row, and the inner loop prints the asterisks in each row.
            4. The inner loop prints the asterisks based on the row number.
            5. Move to the next line after printing the asterisks in the current row.
            6. Repeat the process for the specified number of rows.
            7. End.


*/

#include <iostream>
using namespace std;

int main()
{
    int rows;

    // Prompt the user to enter the number of rows
    cout << "Enter number of Rows: ";
    cin >> rows;

    // Outer loop to iterate through each row
    for (int i = 1; i <= rows; i++)
    {
        // Inner loop to print the asterisks in each row
        for (int j = 0; j < i; j++)
        {
            cout << "*" << " ";
        }

        // Move to the next line after printing the asterisks in the current row
        cout << endl;
    }

    return 0;
}