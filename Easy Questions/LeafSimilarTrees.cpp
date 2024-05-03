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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> r1;
        vector<int> r2; 

        getNodes(root1, r1);
        getNodes(root2, r2);

        
        return r1 == r2;
    }
    void getNodes(TreeNode* curr, vector<int>& vect){
        if(curr == nullptr){
            return;
        }
        getNodes(curr->left, vect); 
        getNodes(curr->right, vect); 
        if(curr->left == nullptr && curr->right == nullptr){
            vect.push_back(curr->val);
        } 
        
}

};
