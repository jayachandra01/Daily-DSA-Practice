class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;

        vector<int> mapST(256, -1); // s char -> t char
        vector<int> mapTS(256, -1); // t char -> s char

        for (int i = 0; i < (int)s.size(); i++) {
            char c1 = s[i];
            char c2 = t[i];

            if (mapST[c1] == -1) {
                mapST[c1] = (unsigned char)c2;
            } else if (mapST[c1] != (unsigned char)c2) {
                return false;
            }

            if (mapTS[(unsigned char)c2] == -1) {
                mapTS[(unsigned char)c2] = (unsigned char)c1;
            } else if (mapTS[(unsigned char)c2] != (unsigned char)c1) {
                return false;
            }
        }
        return true;
    }
};
