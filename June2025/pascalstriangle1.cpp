
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle; // Final triangle to return

        for (int i = 0; i < numRows; i++) {
            vector<int> row(i + 1); // Row has i+1 elements

            for (int j = 0; j <= i; j++) {
                // First and last elements are always 1
                if (j == 0 || j == i) {
                    row[j] = 1;
                } else {
                    // Fill value as sum of two numbers above
                    row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
                }
            }

            triangle.push_back(row); // Add row to triangle
        }

        return triangle;
    }
};
