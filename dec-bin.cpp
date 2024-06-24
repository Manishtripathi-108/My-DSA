/*
? WAP to convert a decimal number to binary number
?What is Binary Number System?
*             Binary number system is a base 2 number system. It uses only two digits, 0 and 1. 
*             Each digit is referred to as a bit. The rightmost bit is the least significant bit and the 
*             leftmost bit is the most significant bit.
* 
* We can convert a decimal number to binary number by dividing the number by 2 and printing the remainder in reverse order.
*/

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int num, bin = 0;

    // cout << "Enter a Number:";
    // cin >> num;

    for (int i = 1; i <= 20; i++)
    {
        cout << "Binary of " << i << " is: ";
        num = i;

        stack<int> binaryDigits;

        // Converting to binary
        while (num > 0)
        {
            binaryDigits.push(num % 2);
            num = num / 2;
        }

        // Printing binary digits in correct order
        while (!binaryDigits.empty())
        {
            cout << binaryDigits.top();
            binaryDigits.pop();
        }

        cout << endl;
    }

    cout << endl;

    // OR

    // while (num > 0)
    // {
    //     cout << (num & 1);
    //     num = num >> 1;
    // }

    return 0;
}