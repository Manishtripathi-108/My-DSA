/*
? WAP to find the largest element in the array.
*
? How this works:
*            The program prompts the user to enter the size of the array.
*            It then reads the elements of the array from the user.
*            The program displays the array elements.
*            Finally, it finds and displays the largest element in the array.
*/

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter size of array: ";
    cin >> num;

    // Declare an array of the specified size
    int arr[num];

    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i]; // Read each element from the user
    }

    // Display the elements of the array
    cout << "Array elements are: ";
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }

    // Initialize the largest variable to the first element of the array
    int largest = arr[0];

    // Iterate through the array to find the largest element
    for (int i = 1; i < num; i++) // Start from the second element
    {
        if (arr[i] > largest) // If the current element is larger than the largest so far
        {
            largest = arr[i]; // Update the largest element
        }
    }

    cout << "\nLargest element in the array is: " << largest << endl;

    return 0;
}
