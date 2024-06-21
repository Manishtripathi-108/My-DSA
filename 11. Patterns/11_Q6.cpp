/*
Write a program to print Floyd's Triangle:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

What and How This Do:
                    1. The program prompts the user to enter the number of rows.
                    2. It uses nested loops to print Floyd's Triangle.
                    3. The outer loop iterates over each row.
                    4. The inner loop prints consecutive numbers for each column in the current row.
                    5. The numbers are incremented consecutively as the triangle is built.
*/

#include <iostream>
using namespace std;

int main()
{
    int rows, num = 1;

    // Prompt the user to enter the number of rows
    cout << "Enter number of Rows: ";
    cin >> rows;

    // Loop to iterate through each row
    for (int i = 0; i < rows; i++)
    {
        // Inner loop to iterate through each column in the current row
        for (int j = 0; j <= i; j++)
        {
            cout << num++ << " ";
        }

        // Move to the next line after printing the current row
        cout << endl;
    }

    return 0;
}
