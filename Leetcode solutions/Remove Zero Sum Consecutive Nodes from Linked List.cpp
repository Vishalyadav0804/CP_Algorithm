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
    ListNode* removeZeroSumSublists(ListNode* head) {
        vector<int> v;
        ListNode* curr=head;
        while(curr!=NULL){
            v.push_back(curr->val);
            curr=curr->next;
        }
        int sum=0,i,j;
        for(i=0;i<v.size();i++){
            sum=0;
            for(j=i;j<v.size();j++){
                sum+=v[j];
                if(sum==0) break;
            }
            if(sum==0){
                v.erase(v.begin()+i,v.begin()+j+1);
                i--;
            }
        }
        if(v.size()==0) return NULL;
        ListNode *root=new ListNode();
        curr=root;
        for(int i=0;i<v.size();i++){
            ListNode *temp=new ListNode(v[i]);
            root->next=temp;
            root=root->next;
        }
        return curr->next;
    }
};
