/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    bool checkPath(ListNode *head,TreeNode* root){
        if(head==NULL) return true;
        if(root==NULL) return false;
        return head->val==root->val && (checkPath(head->next,root->left)||
                                        checkPath(head->next,root->right));
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode *curr=q.front();
            q.pop();
            if(curr->val==head->val && checkPath(head,curr)) return true;
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
        return false;
    }
};
