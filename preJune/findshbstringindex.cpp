#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        return haystack.find(needle);  // Returns the index or -1 if not found
    }
};

int main() {
    Solution sol;
    
    // Test Case 1
    string haystack1 = "sadbutsad", needle1 = "sad";
    cout << "Output: " << sol.strStr(haystack1, needle1) << endl; // Expected: 0

    // Test Case 2
    string haystack2 = "leetcode", needle2 = "leeto";
    cout << "Output: " << sol.strStr(haystack2, needle2) << endl; // Expected: -1

    return 0;
}
