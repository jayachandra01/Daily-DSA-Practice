class Solution {
public:
    int search(vector<int>& nums, int x) {
        int left = 0, right = nums.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;  // Prevents overflow
            
            if (nums[mid] == x)
                return mid;  // Found x, return index
            else if (nums[mid] < x)
                left = mid + 1;  // Search right half
            else
                right = mid - 1; // Search left half
        }
        
        return -1;  // x not found
    }
};
