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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q){return true;} // if equal
        if(!p || !q){return false;} // if ref are different
        if(p->val != q->val){return false;} // if val are diff
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
    
};

// One Line Solution -- Just for jokes. Same Code Basically

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return (!p && !q)? true : (!p || !q)? false : (p->val != q->val)? false : isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
