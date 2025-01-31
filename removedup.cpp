#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;  // Edge case: If nums is empty, return 0

        int k = 1; // `k` is the position where the next unique element will be placed.

        // Loop starts from index 1 (since the first element is always unique)
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) { // If current element is different from previous one
                nums[k] = nums[i]; // Move it to the position `k`
                k++; // Increment k to update the next unique position
            }
        }
        return k; // Return count of unique elements
    }
};

int main() {
    vector<int> nums;
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    cout << "Enter the sorted array elements: ";
    nums.resize(n); // Resize vector to store `n` elements
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution sol;
    int k = sol.removeDuplicates(nums);

    cout << "Output: " << k << ", nums = ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
