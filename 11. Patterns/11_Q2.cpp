/*
    WAP to print the following pattern:
    * * * *
    * * *
    * *
    *

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
        // what This Do: Inner loop to print the asterisks in each row from 0 to (num - i + 1)
        for (int j = 0; j < rows - i + 1; j++)
        {
            cout << "*" << " ";
        }

        // Move to the next line after printing the asterisks in the current row
        cout << endl;
    }

    return 0;
}