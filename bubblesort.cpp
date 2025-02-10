#include <iostream>   // For input and output functions
using namespace std;

// Function to perform Bubble Sort on an array
void bubbleSort(int arr[], int n) {
    // Outer loop: Make n-1 passes over the array
    for (int i = 0; i < n - 1; i++) {
        // Inner loop: Compare adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            // If the current element is greater than the next, swap them
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];      // Temporary variable to hold the current element
                arr[j] = arr[j + 1];      // Move the next element into the current position
                arr[j + 1] = temp;        // Place the stored element into the next position
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    // Loop through each element and print it
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;  // Read the size of the array from the user

    // Dynamically allocate an array of size n
    int* arr = new int[n];

    cout << "Enter " << n << " numbers:" << endl;
    // Read each element from the user into the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array using Bubble Sort
    bubbleSort(arr, n);

    // Print the sorted array
    cout << "Sorted array: ";
    printArray(arr, n);

    // Free the dynamically allocated memory
    delete[] arr;

    return 0;  // End of the program
}
