/*
Write a program that uses nested loops to display the following pattern for a given number of rows:
* * * * *
*       *
*       *
*       *
* * * * *

What and How This Do:
1. The program prompts the user to enter the number of rows.
2. It uses nested loops to print a hollow square pattern of asterisks.
3. The outer loop iterates over each row.
4. The inner loop iterates over each column in the current row.
5. It prints an asterisk at the border positions (first and last rows and columns).
6. It prints a space for inner positions not on the border.
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
    for (int i = 0; i < rows; i++)
    {
        // Inner loop to iterate through each column in the current row
        for (int j = 0; j < rows; j++)
        {
            // Check for the border positions
            if (i == 0 || i == rows - 1)
            {
                cout << "*" << " ";
            }
            else
            {
                if (j == 0 || j == rows - 1)
                {
                    cout << "*" << " ";
                }
                else
                {
                    cout << " " << " ";
                }
            }
        }

        // Move to the next line after printing the current row
        cout << endl;
    }

    return 0;
}

// Alternately, you can modify the program to print a solid square pattern as shown below:

// #include <iostream>
// using namespace std;

// int main()
// {
//     int rows;

//     // Prompt the user to enter the number of rows
//     cout << "Enter number of Rows: ";
//     cin >> rows;

//     // Loop to iterate through each row
//     for (int i = 0; i < rows; i++)
//     {
//         cout << "*" << " ";

//         for (int j = 0; j < rows - 2; j++)
//         {
//             if (i == 0 || i == rows - 1)
//             {
//                 cout << "*" << " ";
//             }
//             else
//             {
//                 cout << " " << " ";
//             }
//         }

//         cout << "*" << endl;
//     }

//     return 0;
// }
