/*
? WAP to reverse the elements of an array without using extra space.
*
? How this works:
*            The program prompts the user to enter the size of the array.
*            It then reads the elements of the array from the user.
*            The program displays the original array elements.
*            It uses a function to reverse the elements of the array in place.
*            Finally, it displays the elements of the reversed array.
*/

#include <iostream>
using namespace std;

// Function to print the elements of an array
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << ", ";
    }
}

// Function to reverse the elements of an array in place
void reverseArray(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];           // Temporarily store the current element
        arr[i] = arr[n - i - 1]; // Replace the current element with its counterpart from the end
        arr[n - i - 1] = temp;   // Replace the counterpart element with the temporarily stored element
    }
}

int main()
{
    int n;

    // Prompt the user to enter the size of the array
    cout << "Enter Size: ";
    cin >> n;

    // Declare an array of the specified size
    int arr[n];

    // Prompt the user to enter the elements of the array
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // Read each element from the user
    }

    // Display the elements of the array
    cout << "Array elements: ";
    printArray(arr, n);

    // Reverse the array
    reverseArray(arr, n);

    // Display the elements of the reversed array
    cout << "\nReversed array elements: ";
    printArray(arr, n);

    return 0;
}
