#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int x) {
    if (left > right) return -1;  

    int mid = left + (right - left) / 2;  

    if (arr[mid] == x) return mid;  
    else if (arr[mid] > x) return binarySearch(arr, left, mid - 1, x);  
    else return binarySearch(arr, mid + 1, right, x);  
}

int main() {
    int n, x;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter the element to search: ";
    cin >> x;

    int index = binarySearch(arr, 0, n - 1, x);
    
    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
