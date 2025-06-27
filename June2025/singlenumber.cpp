class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;

        for (int i = 0; i < nums.size(); i++) {
            result = result ^ nums[i];  // XOR each number with result
        }

        return result;
    }
};
