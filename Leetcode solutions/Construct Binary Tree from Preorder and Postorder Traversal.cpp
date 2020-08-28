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
    int preStart;
    TreeNode* helper(vector<int> pre,vector<int> post, int postStart, int postEnd){
        if (postStart > postEnd) return nullptr;
        int rootVal = post[postEnd];
        TreeNode* root = new TreeNode(rootVal);
        preStart++;
        
        if (preStart == pre.size() || postStart == postEnd){
            return root;
        }
        int leftVal = pre[preStart];
        int tmp;
        for(tmp=0; tmp <= postEnd; tmp++){
            if (post[tmp] == leftVal){
                break;
            }
        }
        root->left = helper(pre, post, postStart, tmp);
        root->right = helper(pre, post, tmp + 1, postEnd - 1);
        return root;
    }
    TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& post) {
        preStart = 0;
        return helper(pre, post, 0, post.size() - 1);
    }
};
