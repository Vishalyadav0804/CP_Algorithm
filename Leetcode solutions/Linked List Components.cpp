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
class Solution {
public:
    int numComponents(ListNode* head, vector<int>& G) {
        unordered_set<int> Gs(G.begin(), G.end());
        ListNode* current = head;
        int count = 0;
        bool componentStarted = false;
        while (current) {
            if (Gs.find(current->val) != Gs.end()) {
                if (!componentStarted) {
                    count++;
                    componentStarted = true;
                }
            }
            else {
                componentStarted = false;
            }
            current = current->next;
        }
        return count;
    }
};
