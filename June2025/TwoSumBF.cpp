class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Loop through each number in the array
        for (int i = 0; i < nums.size(); i++) {
            // Loop through the numbers that come after nums[i]
            for (int j = i + 1; j < nums.size(); j++) {
                // Check if the two numbers add up to the target
                if (nums[i] + nums[j] == target) {
                    // If they do, return their indices
                    return {i, j};
                }
            }
        }
        // If no pair is found (shouldn't happen)
        return {};
    }
};
