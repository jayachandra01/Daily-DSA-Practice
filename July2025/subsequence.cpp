class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;  // i for s, j for t

        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) {
                i++;  // matched this character, move s pointer
            }
            j++;  // always move t pointer
        }

        return i == s.size(); // if we matched all of s, it's a subsequence
    }
};
