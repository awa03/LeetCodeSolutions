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
    // Sequence -> Root - Left - Right
public:
    vector<int> preorderTraversal(TreeNode* root) {
       vector<int> traversal; 
       Helper(root, traversal);
       return traversal;
    }
    void Helper(TreeNode* root, vector<int>& vec){
        if(root == nullptr){
            return;
        }
        else {
            // handle root
            vec.push_back(root->val);

            // handle left
            Helper(root->left, vec);

            // handle right
            Helper(root->right, vec);
        }
    }
};
