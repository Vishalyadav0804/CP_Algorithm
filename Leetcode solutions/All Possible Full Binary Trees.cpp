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
    vector<TreeNode*> allPossibleFBT(int N) {
        if(N==0) return {NULL};
        if(N==1) return {new TreeNode(0)};
        vector<TreeNode*> ans;
        for(int i=0;i<N;i++){
            int l=i;
            int r=N-i-1;
            if(l%2!=0 && r%2!=0){
                vector<TreeNode*> left=allPossibleFBT(l);
                vector<TreeNode*> right=allPossibleFBT(r);
                for(auto lef:left){
                    for(auto rgt:right){
                        TreeNode *root=new TreeNode(0);
                        root->left=lef;
                        root->right=rgt;
                        ans.push_back(root);
                    }
                }
            }
        }
        return ans;
    }
};
