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
    ListNode *detectCycle(ListNode *head) {
        auto slow = head;
		auto fast = head;

		while (fast && fast->next) {
			slow = slow->next;
			fast = fast->next->next;
			if (slow == fast) break;
		}

		// in previous problem, we simply return false here
		// in this problem, we have to do error checking
		if (!fast || !fast->next) return NULL;

		// move the slow pointer to the head, now both
		// slow and fast step 1 to find the entry point
		slow = head;
		while (slow != fast) {
			slow = slow->next;
			fast = fast->next;
		}

		return slow;
    }
};
