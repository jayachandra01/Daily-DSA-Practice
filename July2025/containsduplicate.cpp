class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;  // Set to keep track of seen numbers

        for (int num : nums) {     // Go through each number in the array
            if (seen.count(num)) { // If we already saw this number before
                return true;       // Duplicate found, return true
            }
            seen.insert(num);      // Otherwise, remember this number
        }

        return false;              // No duplicates found, return false
    }
};