class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // Array to store letter counts for 'a' to 'z'
        vector<int> count(26, 0);
        
        // Count letters in magazine
        for (char c : magazine) {
            count[c - 'a']++;
        }
        
        // Check letters in ransomNote
        for (char c : ransomNote) {
            if (count[c - 'a'] == 0) {
                // Letter not available
                return false;
            }
            count[c - 'a']--; // Use the letter
        }
        
        return true;
    }
};
