class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // Step 1: If no intervals, return empty
        if (intervals.empty()) return {};

        // Step 2: Sort intervals by start time
        sort(intervals.begin(), intervals.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[0] < b[0];
             });

        // Step 3: Vector to hold merged intervals
        vector<vector<int>> merged;

        // Step 4: Go through each interval
        for (auto& interval : intervals) {
            // Case A: If merged is empty OR current interval does not overlap with last
            if (merged.empty() || interval[0] > merged.back()[1]) {
                merged.push_back(interval); // just add it
            } else {
                // Case B: Overlaps → merge by updating the end
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }

        // Step 5: Return merged intervals
        return merged;
    }
};
