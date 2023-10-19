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
    vector<vector<int>> levelOrder(TreeNode* root) {
        std::vector<std::vector<int>> result;
        helper(root, 0, result);
        return result;
    }
    void helper(TreeNode* node, int depth, std::vector<std::vector<int>>& result){
        if (!node) {
            return;
        }
        if (depth == result.size()) {
            result.push_back({});
        }
        result[depth].push_back(node->val);
        helper(node->left, depth + 1, result);
        helper(node->right, depth + 1, result);
    }
};
