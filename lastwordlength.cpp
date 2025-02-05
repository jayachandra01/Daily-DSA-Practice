#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int i = s.length() - 1;

        // Step 1: Skip trailing spaces
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // Step 2: Count characters in the last word
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
    }
};

// Driver Code (For Testing)
int main() {
    Solution sol;
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "Length of last word: " << sol.lengthOfLastWord(s) << endl;
    return 0;
}
