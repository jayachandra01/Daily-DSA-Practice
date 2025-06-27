#include <iostream>

using namespace std;

int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1) return n; // If array has 0 or 1 element, return as is

    int j = 0; // Pointer for unique elements

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) { // If current element is different from the last unique element
            j++;
            arr[j] = arr[i]; // Move unique element forward
        }
    }
    
    return j + 1; // New size of the array
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; // Dynamic array based on user input
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // User input
    }

    int newSize = removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
