class Solution {
public:
    bool isValid(string s) {
        // Quick fail: odd-length strings can never be fully matched.
        if (s.size() % 2 != 0) return false;

        // Map each closing bracket to the opening bracket it must match.
        unordered_map<char, char> need = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        // Stack to keep track of currently open brackets.
        stack<char> st;

        // Process each character in the string.
        for (char ch : s) {
            // Case 1: Opening bracket → push it so the next compatible closing can match it.
            if (ch == '(' || ch == '[' || ch == '{') {
                st.push(ch);
            } 
            // Case 2: Closing bracket → must match the latest opening on the stack.
            else {
                // If there's no opening to match against, invalid.
                if (st.empty()) return false;

                // The top must be exactly the corresponding opening bracket.
                if (st.top() != need[ch]) return false;

                // Matched: remove that opening from consideration.
                st.pop();
            }
        }

        // Valid iff all openings found matches (stack fully cleared).
        return st.empty();
    }
};
