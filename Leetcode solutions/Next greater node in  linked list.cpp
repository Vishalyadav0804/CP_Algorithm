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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
		if(!head) return ans;
		vector<int> cnt;
		while(head)
		{
			cnt.push_back(head->val);
			head=head->next;
		}

		stack<int> st;
		for(int i=cnt.size()-1;i>=0;i--)
		{
			while(!st.empty() && cnt[i]>=st.top())
			{
				st.pop();
			}
			if(st.empty())
			{
				ans.push_back(0);
			}
			else
			{
				ans.push_back(st.top());
			}
			st.push(cnt[i]);
		}
		reverse(ans.begin(),ans.end());
		return ans;
    }
};
