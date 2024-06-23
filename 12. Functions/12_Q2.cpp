//? WAP to print if a number is odd or even using functions.

#include <iostream>
using namespace std;

// Function to check if a number is odd or even
void checkOddEven(int num)
{
    if (num % 2 == 0)
    {
        cout << num << " is an even number." << endl;
    }
    else
    {
        cout << num << " is an odd number." << endl;
    }
}

int main()
{
    int num;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is odd or even using the function
    checkOddEven(num);

    return 0;
}