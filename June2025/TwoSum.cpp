class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Create a map to store number -> index
        unordered_map<int, int> seen;

        // Loop through each element in the array
        for (int i = 0; i < nums.size(); i++) {
            int current = nums[i];
            int needed = target - current;

            // If the needed number is already in the map, return the indices
            if (seen.find(needed) != seen.end()) {
                return {seen[needed], i};  // seen[needed] is the earlier index, i is the current one
            }

            // Otherwise, add the current number and its index to the map
            seen[current] = i;
        }

        // If no solution is found (should never happen per the problem)
        return {};
    }
};
