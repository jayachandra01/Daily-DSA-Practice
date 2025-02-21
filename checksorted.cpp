#include <iostream>

using namespace std;

bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {  
            return false;  // If any element is smaller than the previous, it's not sorted
        }
    }
    return true;  
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];  // Declare array based on user input
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Take input from user
    }

    if (isSorted(arr, n)) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is NOT sorted." << endl;
    }

    return 0;
}
