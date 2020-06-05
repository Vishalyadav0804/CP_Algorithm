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
        
        int len (ListNode* head) {
        if (!head) return 0;
        int c = 0;
        while (head) {
            c++;
            head = head->next;
        }
        return c;
    }
    
    bool isPalindrome(ListNode* head) {
        
        if (!head) return true;
        
        ListNode *temp, *prev, *a=head;
        
        prev = NULL;
        int l = len(a);
        if (l == 1) return true;
        bool odd = false, even = false ;
        
        if (l%2 == 0) even == true;
        else odd = true;
        
        int mid = abs(l/2);
        if (odd) mid++;
        
        while (mid) {
            temp = a->next;
            a->next = prev;
            prev = a;
            a = temp;
            mid--;
        }
        head = prev;
        
        ListNode* b = a;
        
        a = head;
        
        if (odd) a = a-> next;
        
        while (a && b) {
            if (a->val != b->val) return false;
            a = a->next;
            b = b->next;
        }
        return true;
    
    }
};
