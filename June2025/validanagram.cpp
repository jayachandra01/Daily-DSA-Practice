class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        int count[26] = {0};  // To count frequency of each letter (a–z)

        for (char c : s) {
            count[c - 'a']++;  // Increment count for s
        }

        for (char c : t) {
            count[c - 'a']--;  // Decrement count for t
        }

        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) return false;  // Mismatch in frequency
        }

        return true;  // All characters matched
    }
};
