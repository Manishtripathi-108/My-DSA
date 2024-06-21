/*
    What This Do: The main function repeatedly prompts the user to enter a number.
                If the number is a multiple of 10, it continues to the next iteration.
                If the number is -1, it displays a message and exits the program.
                Otherwise, it displays a message indicating that the number is not a multiple of 10.
 */
#include <iostream>
using namespace std;

int main()
{

    int num;

    do
    {
        cout << "\nEnter a Number: ";
        cin >> num;

        if (num % 10 == 0)
        {
            continue;
        }
        else if (num == -1)
        {
            cout << "You Entered -1. Exiting the Program." << endl;
            break;
        }
        else
            cout << "You Entered a Number Which is not the multiple of 10: " << num << endl;

    } while (true);

    return 0;
}