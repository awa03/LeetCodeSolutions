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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> traversal;     
        Helper(root, traversal);
        return traversal;
    }
    void Helper(TreeNode* currNode, vector<int>& vec){
        if(currNode == nullptr){
            return;
        }
        Helper(currNode->left, vec);
        Helper(currNode->right, vec);
        vec.push_back(currNode->val);
    }

};
