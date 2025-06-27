class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // Start from the last digit and move left
        for (int i = digits.size() - 1; i >= 0; i--) {
            // If the current digit is less than 9, we can just add 1 and return
            if (digits[i] < 9) {
                digits[i]++;  // Increase the digit
                return digits;
            }
            
            // If it's 9, set it to 0 and carry will go to the next left digit
            digits[i] = 0;
        }

        // If we finished the loop, all digits were 9
        // Example: [9, 9, 9] → after loop becomes [0, 0, 0]
        // We need to add 1 at the beginning: [1, 0, 0, 0]
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
