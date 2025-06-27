#include <iostream>
#include <climits>  // For INT_MIN

using namespace std;

int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        cout << "Array must have at least two elements." << endl;
        return -1; // Invalid case
    }

    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest; // Update second largest
            largest = arr[i]; // Update largest
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i]; // Update second largest if it's not equal to largest
        }
    }

    return (secondLargest == INT_MIN) ? -1 : secondLargest;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findSecondLargest(arr, n);

    if (result != -1) {
        cout << "The second largest element is: " << result << endl;
    } else {
        cout << "No second largest element found." << endl;
    }

    return 0;
}
