#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";  // Edge case: No strings in input
        
        string prefix = strs[0];  // Start with the first string as prefix
        
        for (int i = 1; i < strs.size(); i++) {  // Compare with each string
            while (strs[i].find(prefix) != 0) {  // Check if prefix is at start
                prefix = prefix.substr(0, prefix.length() - 1); // Trim last character
                
                if (prefix.empty()) return "";  // If empty, no common prefix
            }
        }
        return prefix;
    }
};

int main() {
    Solution sol;
    vector<string> strs = {"flower", "flow", "flight"};
    cout << "Longest Common Prefix: " << sol.longestCommonPrefix(strs) << endl;

    vector<string> strs2 = {"dog", "racecar", "car"};
    cout << "Longest Common Prefix: " << sol.longestCommonPrefix(strs2) << endl;

    return 0;
}
