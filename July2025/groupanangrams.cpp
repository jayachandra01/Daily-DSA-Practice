class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;

        for (string word : strs) {
            string sortedWord = word;
            sort(sortedWord.begin(), sortedWord.end());  // step 1
            groups[sortedWord].push_back(word);          // step 2
        }

        vector<vector<string>> result;
        for (auto entry : groups) {
            result.push_back(entry.second);              // step 3
        }

        return result;
    }
};
