#include <iostream>
using namespace std;

// Function to perform Insertion Sort
void insertionSort(int arr[], int n) {
    // Start from the second element (index 1) as the first element is considered sorted
    for (int i = 1; i < n; i++) {
        int key = arr[i];  // The element to be inserted into the sorted part
        int j = i - 1;     // Index of the last element in the sorted portion
        
        // Move elements of arr[0..i-1] that are greater than key one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;  // Decrement j to continue comparing with the previous elements
        }
        // Insert the key into its correct position in the sorted part
        arr[j + 1] = key;
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;  // Read the number of elements

    // Dynamically allocate an array of size n
    int *arr = new int[n];

    cout << "Enter " << n << " numbers:" << endl;
    // Read each element into the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array using Insertion Sort
    insertionSort(arr, n);

    // Print the sorted array
    cout << "Sorted array: ";
    printArray(arr, n);

    // Deallocate the dynamic memory
    delete[] arr;

    return 0;
}
