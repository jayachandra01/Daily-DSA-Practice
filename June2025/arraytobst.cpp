class Solution {
public:
    TreeNode* buildTree(vector<int>& nums, int left, int right) {
        if (left > right) return nullptr; // Base case

        int mid = left + (right - left) / 2; // To avoid overflow
        TreeNode* node = new TreeNode(nums[mid]);

        node->left = buildTree(nums, left, mid - 1);
        node->right = buildTree(nums, mid + 1, right);

        return node;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return buildTree(nums, 0, nums.size() - 1);
    }
};
