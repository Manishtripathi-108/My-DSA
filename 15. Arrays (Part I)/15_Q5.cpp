/*
? WAP to search for an element in a sorted array using binary search.
*
? How this works:
*            The program prompts the user to enter the size of the array.
*            It then reads the elements of the sorted array from the user.
*            The program displays the array elements.
*            The user is prompted to enter the element to be searched.
*            The program uses a recursive binary search function to find the element.
*            It then displays the result indicating whether the element was found and its index.
*/

#include <iostream>
using namespace std;

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << ", ";
    }
}

int binarySearch(int arr[], int start, int end, int find)
{
    int mid = (start + end) / 2; // Calculate mid index

    // Base condition
    if (start > end)
    {
        return -1;
    }

    // If element is found
    if (find == arr[mid])
    {
        return mid;
    }
    else if (find > arr[mid]) // If element is greater than mid element
    {
        return binarySearch(arr, mid + 1, end, find); // Search in right half
    }
    else // If element is less than mid element
    {
        return binarySearch(arr, start, mid - 1, find); // Search in left half
    }
}

int main()
{
    int n, find;

    cout << "Enter Size: ";
    cin >> n;

    // Declare an array of size n
    int arr[n];

    // Input array elements
    cout << "Enter array elements in sorted order: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Display array elements
    cout << "Array elements: ";
    printArray(arr, n);

    // Input element to find
    cout << "\nEnter element to find: ";
    cin >> find;

    // Call the search function
    int start = 0;
    int result = binarySearch(arr, start, n - 1, find);

    // Display the result
    if (result == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element found at index: " << result + 1;
    }

    return 0;
}
