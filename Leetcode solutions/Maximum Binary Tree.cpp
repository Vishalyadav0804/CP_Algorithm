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
    int findidx(vector<int> &nums){
        int big=INT_MIN,idx=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>big){
                big=nums[i];
                idx=i;
            }
        }
        return idx;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.size()==1)
            return new TreeNode(nums[0]);
        int rootidx=findidx(nums);
        TreeNode *root=new TreeNode(nums[rootidx]);
        vector<int> leftnums={nums.begin(),nums.begin()+rootidx};
        vector<int> rightnums={nums.begin()+rootidx+1,nums.end()};
        if(leftnums.size())
            root->left=constructMaximumBinaryTree(leftnums);
        else
            root->left=NULL;
        if(rightnums.size())
            root->right=constructMaximumBinaryTree(rightnums);
        else
            root->right=NULL;
        return root;
    }
};
