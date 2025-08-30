class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;                          // left pointer at the smallest value
        int r = (int)numbers.size() - 1;    // right pointer at the largest value

        while (l < r) {
            long long sum = 1LL * numbers[l] + numbers[r];   // use 64-bit to be overflow-safe

            if (sum == target) {
                // LeetCode requires 1-based indices
                return {l + 1, r + 1};
            } else if (sum < target) {
                // Sum too small -> need a bigger sum -> move left pointer right
                ++l;
            } else {
                // Sum too large -> need a smaller sum -> move right pointer left
                --r;
            }
        }

        // Per problem statement, there is exactly one solution.
        // Returning an empty vector just satisfies the signature.
        return {};
    }
};
