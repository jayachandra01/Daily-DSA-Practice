class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;                  // Pointer at start of string
        int right = s.size() - 1;      // Pointer at end of string

        while (left < right) {
            // Skip non-alphanumeric characters from the left
            while (left < right && !isalnum(s[left])) {
                left++;
            }

            // Skip non-alphanumeric characters from the right
            while (left < right && !isalnum(s[right])) {
                right--;
            }

            // Compare lowercase versions of the characters
            if (tolower(s[left]) != tolower(s[right])) {
                return false;          // Not a match → not a palindrome
            }

            // Move both pointers inward
            left++;
            right--;
        }

        // All characters matched
        return true;
    }
};
