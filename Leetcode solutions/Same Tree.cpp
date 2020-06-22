/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL)
            return true;
        if((p==NULL && q!=NULL)||(p!=NULL && q==NULL))
             return false;
        if(p->val!=q->val)
            return false;
        bool i1=isSameTree(p->left,q->left);
        bool i2=isSameTree(p->right,q->right);
        if(!i1||!i2)
            return false;
        return true;
    }
};
