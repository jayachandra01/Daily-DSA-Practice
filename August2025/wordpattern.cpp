class Solution {
public:
    bool wordPattern(string pattern, string s) {
        // Step 1: split s into words
        vector<string> words;
        string word;
        stringstream ss(s);
        while (ss >> word) {
            words.push_back(word);
        }
        
        // Step 2: check length match
        if (words.size() != pattern.size()) return false;
        
        // Step 3: create two maps
        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar;
        
        // Step 4: iterate and check mapping
        for (int i = 0; i < pattern.size(); i++) {
            char c = pattern[i];
            string w = words[i];
            
            // Check char -> word mapping
            if (charToWord.count(c)) {
                if (charToWord[c] != w) return false;
            } else {
                charToWord[c] = w;
            }
            
            // Check word -> char mapping
            if (wordToChar.count(w)) {
                if (wordToChar[w] != c) return false;
            } else {
                wordToChar[w] = c;
            }
        }
        
        return true;
    }
};
