/*
? Write a program to show function overloading using the above snippets.
*
* What is function overloading?
*                Function overloading is a feature in C++ where two or more functions can have the same name but different parameters.
*                It allows you to create multiple functions with the same name but different parameter lists.
*                The compiler determines which function to call based on the number and types of arguments passed to the function.
*
*/

#include <iostream>
using namespace std;

// Function to calculate the product of two integers
int product(int num1, int num2)
{
    return num1 * num2;
}

// Function to calculate the product of three integers
int product(int num1, int num2, int num3)
{
    return num1 * num2 * num3;
}

// Overloaded function to calculate the product of two doubles
double product(double num1, double num2)
{
    return num1 * num2;
}

int main()
{
    int num1, num2, num3;
    double dNum1, dNum2;

    // Prompt the user to enter the first integer
    cout << "Enter the first integer: ";
    cin >> num1;

    // Prompt the user to enter the second integer
    cout << "Enter the second integer: ";
    cin >> num2;

    // Calculate the product of the two integers using the function
    int result = product(num1, num2);

    // Display the result
    cout << "The product of " << num1 << " and " << num2 << " is " << result << endl;

    // Prompt the user to enter the third integer
    cout << "Enter the third integer: ";
    cin >> num3;

    // Calculate the product of the three integers using the function
    result = product(num1, num2, num3);

    // Display the result
    cout << "The product of " << num1 << ", " << num2 << " and " << num3 << " is " << result << endl;

    // Prompt the user to enter the first double
    cout << "Enter the first double: ";
    cin >> dNum1;

    // Prompt the user to enter the second double
    cout << "Enter the second double: ";
    cin >> dNum2;

    // Calculate the product of the two doubles using the overloaded function
    double dResult = product(dNum1, dNum2);

    // Display the result
    cout << "The product of " << dNum1 << " and " << dNum2 << " is " << dResult << endl;

    return 0;
}
