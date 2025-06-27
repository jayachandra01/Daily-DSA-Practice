#include <iostream>  // Standard I/O library
#include <vector>    // To use the vector container

using namespace std; // Avoid prefixing std:: every time

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(); // Get the size of the input array
        if (n <= 2) return n; // If the array has 2 or fewer elements, return its size (already valid)

        int i = 2; // Pointer for placing elements (starting after first two elements)
        
        for (int j = 2; j < n; j++) { // Start checking from the third element
            if (nums[j] != nums[i - 2]) { // Ensure at most 2 occurrences of each element
                nums[i] = nums[j]; // Place valid element at position `i`
                i++; // Move `i` forward to accept the next valid element
            }
        }
        
        return i; // Return the length of the modified array
    }
};

int main() {
    Solution sol; // Create an instance of the Solution class
    
    // Test Case 1
    vector<int> nums1 = {1,1,1,2,2,3}; // Input array
    int k1 = sol.removeDuplicates(nums1); // Call function to remove extra duplicates
    cout << "Output: " << k1 << ", nums = ";
    for (int i = 0; i < k1; i++) cout << nums1[i] << " "; // Print modified array
    cout << endl; // Expected Output: 5, nums = [1,1,2,2,3]

    // Test Case 2
    vector<int> nums2 = {0,0,1,1,1,1,2,3,3}; // Another input array
    int k2 = sol.removeDuplicates(nums2); // Call function
    cout << "Output: " << k2 << ", nums = ";
    for (int i = 0; i < k2; i++) cout << nums2[i] << " "; // Print modified array
    cout << endl; // Expected Output: 7, nums = [0,0,1,1,2,3,3]

    return 0; // Exit program
}
