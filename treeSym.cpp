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
    bool isSymmetric(TreeNode* root) {
        if (!root) {
            return true; // An empty tree is symmetric.
        }
        return symmetricHelper(root->left, root->right);
    }
    bool symmetricHelper(TreeNode* left, TreeNode* right){
        if(!left && !right){ // if not left and right nodes (true)
            return true; 
        } if(!left || !right){ // if not right or left nodes (false)
            return false;
        } if (left->val != right->val) { // vals not equal
            return false; 
        } 
        return symmetricHelper(left->left, right->right) && symmetricHelper(left->right, right->left);
    }
};
