/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        ListNode* it = head;
        int count = 0;
        while (it) {
            ++count;
            if (count == k) {
                break;
            }
            it = it->next;
        }
        if (count < k)
            return head;

        ListNode* post = reverseKGroup(it->next, k);

        ListNode* prev = NULL, *cur = head, *next = NULL;
        for (int i = 0; i < k; ++i) {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }

        head->next = post;

        return prev;
     
    }
};
