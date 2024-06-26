/*
? WAP to reverse the elements of an array using extra space.
*
? How this works:
*            The program prompts the user to enter the size of the array.
*            It then reads the elements of the array from the user.
*            The program displays the original array elements.
*            It uses a function to reverse the elements of the array.
*            Finally, it displays the elements of the reversed array.
*/

#include <iostream>
using namespace std;

// Function to reverse the elements of the array
void reverseArray(int arr[], int revArr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        revArr[n - i - 1] = arr[i]; // Place the element at the corresponding position in the reversed array
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << ", ";
    }
}

int main()
{
    int n;

    // Prompt the user to enter the size of the array
    cout << "Enter Size: ";
    cin >> n;

    // Declare an array and a reversed array of the specified size
    int arr[n], revArr[n];

    // Prompt the user to enter the elements of the array
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Display the elements of the array
    cout << "Array elements: ";
    printArray(arr, n);

    // Reverse the array
    reverseArray(arr, revArr, n);

    // Display the elements of the reversed array
    cout << "\nReversed array elements: ";
    printArray(revArr, n);

    return 0;
}
