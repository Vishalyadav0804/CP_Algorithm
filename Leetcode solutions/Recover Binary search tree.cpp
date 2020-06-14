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
    void findSegment(TreeNode *root){
        if(root==NULL) return;
        findSegment(root->left);
        if(prevNode !=NULL){
            if(prevNode->val > root->val){
                if(firstStartPoint==NULL){
                    firstStartPoint=prevNode;
                }
                lastEndPoint=root;
            }
        }
        prevNode=root;
        findSegment(root->right);
    }
    TreeNode *firstStartPoint,*lastEndPoint,*prevNode;
    void recoverTree(TreeNode* root) {
        findSegment(root);
        swap(firstStartPoint->val,lastEndPoint->val);
    }
};
