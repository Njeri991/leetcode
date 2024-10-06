class Solution {
public:
    int checkBalance(TreeNode* node) {
        if (!node) return 0;

        int leftHeight = checkBalance(node->left);
        if (leftHeight == -1) return -1;

        int rightHeight = checkBalance(node->right);

        if (rightHeight == -1) return -1;

        if (abs(leftHeight - rightHeight) > 1) return -1;

        return 1 + max(leftHeight, rightHeight);
    }
    bool isBalanced(TreeNode* root) {
        return checkBalance(root) != -1;
    }
};