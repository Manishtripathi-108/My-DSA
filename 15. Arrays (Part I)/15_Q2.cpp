/*
? WAP to perform a linear search on an array.
*
? How this works:
*            The program prompts the user to enter the size of the array.
*            It then reads the elements of the array from the user.
*            The program displays the array elements.
*            The program prompts the user to enter an element to search for.
*            It uses a linear search function to find the element in the array.
*            If the element is found, it displays the index of the element.
*            If the element is not found, it displays a not found message.
*/

#include <iostream>
using namespace std;

// Function to perform linear search on an array
int linearSearch(int arr[], int n, int find)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == find)
        {
            return i; // Return the index if the element is found
        }
    }

    return -1; // Return -1 if the element is not found
}

int main()
{
    int n, find;

    // Prompt the user to enter the size of the array
    cout << "Enter Size: ";
    cin >> n;

    // Declare an array of the specified size
    int arr[n];

    // Prompt the user to enter the elements of the array
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Display the elements of the array
    cout << "Array elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", "; 
    }

    // Prompt the user to enter the element to find
    cout << "\nEnter element to find: ";
    cin >> find;

    // Perform linear search to find the element
    int result = linearSearch(arr, n, find);

    // Display the result of the search
    if (result != -1)
        cout << find << " found at index " << result + 1 << endl;
    else
        cout << find << " not found!" << endl;

    return 0;
}
