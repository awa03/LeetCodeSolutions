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
    bool isBalanced(TreeNode* root) {
        return helper(root);
    }
    bool helper(TreeNode* curr){
        if(curr == nullptr){
            return true;
        }
        
        if(abs(depth(curr->left) - depth(curr->right)) > 1){
            return false;
        }

        return (helper(curr->left) && helper(curr->right));

    }
    int depth(TreeNode* curr) {
        if(curr == nullptr) return 0;
        return 1 + max(depth(curr->right), depth(curr->left));
    }
};
