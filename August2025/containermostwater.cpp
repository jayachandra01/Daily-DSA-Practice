class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = (int)height.size();
        if (n < 2) return 0;              // edge case: need at least two lines

        int l = 0, r = n - 1;             // start widest: left at 0, right at n-1
        long long best = 0;               // track the maximum area safely

        while (l < r) {
            int left_h  = height[l];      // current left height
            int right_h = height[r];      // current right height
            int width   = r - l;          // distance between lines

            long long curr = 1LL * width * min(left_h, right_h);
                                           // area = width * limiting (shorter) height
            if (curr > best) best = curr; // keep the best area so far

            // Greedy step: move the pointer at the shorter line.
            // Only this move can possibly raise the limiting height.
            if (left_h < right_h) {
                ++l;                      // hope to find a taller left to offset width loss
            } else if (right_h < left_h) {
                --r;                      // hope to find a taller right
            } else {
                // Equal heights: moving either is fine; moving both is a small micro-optimization.
                ++l; --r;
            }
        }

        return (int)best;                 // result fits in int for problem constraints
    }
};
