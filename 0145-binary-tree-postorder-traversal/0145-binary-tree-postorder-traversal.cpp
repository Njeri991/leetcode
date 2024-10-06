class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        postorder(root, result);
        return result;
    }

private:
    void postorder(TreeNode* node, vector<int>& result) {
        if (!node) return;           // Base case: If the node is null, return

        postorder(node->left, result);
        postorder(node->right, result);
        result.push_back(node->val);
    }
};