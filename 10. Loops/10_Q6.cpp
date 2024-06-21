/*
write a program that takes a number from the user and checks whether the number is prime or not.

what This Do:
            The main function takes a number from the user and
            iterates from 2 to num - 1 and check whether the number is divisible by any number in the range.
            If the number is divisible by any number in the range, it sets the isPrime flag to false and breaks the loop.
            Finally, it checks the isPrime flag and displays the result.

*/

// #include <iostream>
// using namespace std;

// int main()
// {

//     int num;
//     bool isPrime = true;

//     cout << "Enter a Number: ";
//     cin >> num;

//     for (int i = 2; i < num - 1; i++)
//     {
//         if (num % i == 0)
//         {
//             isPrime = false;
//             break;
//         }
//     }

//     if (isPrime)
//     {
//         cout << "The Number is Prime." << endl;
//     }
//     else
//     {
//         cout << "The Number is Not Prime." << endl;
//     }

//     return 0;
// }

/*
Optimize the above program to reduce the number of iterations in the loop.

What This Do:
            The main function takes a number from the user and iterates from 2 to sqrt(num).

what is different in this code:
            The loop iterates from 2 to sqrt(num) instead of num - 1.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int num;
    bool isPrime = true;

    cout << "Enter a Number: ";
    cin >> num;

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << "The Number is Prime." << endl;
    }
    else
    {
        cout << "The Number is Not Prime." << endl;
    }

    return 0;
}