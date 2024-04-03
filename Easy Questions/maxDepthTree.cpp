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
    int maxDepth(TreeNode* root) {
        if(!root){return 0;} // O(1) depth 0
        int left = maxDepth(root->left); // set left depth
        int right = maxDepth(root->right); // set right depth
        return 1 + std::max(left, right); // find the max 
    }
};

// ------------------------------ Other Solution -------------------------------- // 
// -- Also Recursive -- 

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
    int maxDepth(TreeNode* node, int depth = 0) {
        if(node == nullptr){
            return depth;
        }
        int depth1 = maxDepth(node->right, depth+1);
        int depth2 = maxDepth(node->left, depth+1);
        return (depth1 > depth2) ? depth1 : depth2;
    }
};
