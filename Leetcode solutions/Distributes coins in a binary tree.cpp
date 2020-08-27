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
    int minCoinMoves(TreeNode* root, int& moves) {
        if(!root)
            return 0;
        int net_coins_left = minCoinMoves(root->left, moves);
        int net_coins_right = minCoinMoves(root->right, moves);
        moves += abs(net_coins_left) + abs(net_coins_right);
        return net_coins_left + net_coins_right + root->val - 1;
    }
    int distributeCoins(TreeNode* root) {
        int moves = 0;
        minCoinMoves(root, moves);
        return moves;
    }
};
