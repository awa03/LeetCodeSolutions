
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result; // Tree InOrder
        inorderTraversal(root, result); // Inorder first call
        return result;
    }
    void inorderTraversal(TreeNode* node, vector<int>& result) {
        if (node == nullptr) {return; }
        inorderTraversal(node->left, result); // recursively call to search left Nodes
        result.push_back(node->val);          // add nodes to the vector
        inorderTraversal(node->right, result); // recursively call to search right Nodes
    }
};


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
