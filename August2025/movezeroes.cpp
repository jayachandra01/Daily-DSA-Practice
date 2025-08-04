class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastNonZero = 0; // Points to the index where the next non-zero element should be placed

        // Step 1: Move non-zero elements to the front
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != 0) {
                nums[lastNonZero] = nums[i];
                lastNonZero++;
            }
        }

        // Step 2: Fill the rest with zeroes
        for (int i = lastNonZero; i < nums.size(); ++i) {
            nums[i] = 0;
        }
    }
};
