#include <iostream>
using namespace std;

int main()
{
    int rows = 4;

    for (int i = 0; i < rows; i++)
    {
        // Print leading spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // Print asterisks
        for (int k = 0; k < 2 * (rows - i) - 1; k++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
