//? WAP to find product of two numbers using functions.

#include <iostream>
using namespace std;

// Function to calculate the product of two numbers
int product(int num1, int num2)
{
    return num1 * num2;
}

int main()
{
    int num1, num2;

    // Prompt the user to enter the first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Prompt the user to enter the second number
    cout << "Enter the second number: ";
    cin >> num2;

    // Calculate the product of the two numbers using the function
    int result = product(num1, num2);

    // Display the result
    cout << "The product of " << num1 << " and " << num2 << " is " << result << endl;

    return 0;
}