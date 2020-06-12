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
    int count=0;
    bool palindrome(string temp){
        int c=1;
        sort(temp.begin(),temp.end());
        for(int i=0;i<temp.size();){
            if(temp[i]==temp[i+1]){
                i+=2;
            }
            else{
                c -=1;
                if(c == -1) return false;
                i+=1;
            }
        }
        return true;
    }
    void calPath(TreeNode *root,string temp){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            temp+=to_string(root->val);
            if(palindrome(temp))
                count++;
            temp.pop_back();
            return;
        }
        temp+=to_string(root->val);
        calPath(root->left,temp);
        calPath(root->right,temp);
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        calPath(root,"");
        return count;
    }
};
