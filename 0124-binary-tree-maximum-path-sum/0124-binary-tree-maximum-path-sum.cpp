/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int globalMax = INT_MIN; 
        maxGain(root, globalMax);
        return globalMax;
    }
private:
    int maxGain(TreeNode* node, int& globalMax) {
        if (!node) return 0;

        int leftGain = max(maxGain(node->left, globalMax), 0);
        int rightGain = max(maxGain(node->right, globalMax), 0);

        int currentPathSum = node->val + leftGain + rightGain;

        globalMax = max(globalMax, currentPathSum);
        return node->val + max(leftGain, rightGain);
    }
};