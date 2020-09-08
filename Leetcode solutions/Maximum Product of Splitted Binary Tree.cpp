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
    long long ans;
	long long count;
	int mod;
	long long tol(TreeNode* root){
		if(not root) return 0;
		int left=tol(root->left);
		int right=tol(root->right);
		return left+right+root->val;
	}
	int helper(TreeNode* root){
		if(not root) return 0;
		long long rest=root->val+helper(root->left)+helper(root->right);
		ans=max(ans,(count-rest)*rest);

		return rest;
	}
    int maxProduct(TreeNode* root) {
        mod=pow(10,9)+7;//1e9+7
		count=tol(root);
		ans=0;
		helper(root);
		return ans%mod;
    }
};
