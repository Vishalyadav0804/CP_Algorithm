/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node newHead(0), *p = head, *t = NULL;
        while(p)
        {
            Node *cloned = new Node(p->val);
            cloned->next = p->next;
            p->next = cloned;
            p = cloned->next;
        }
        
        p = head;
        while(p && p->next)
        {
            if(p->random) p->next->random = p->random->next;
            p = p->next->next;
        }
        
        p = head;
        t = &newHead;
        while(p && p->next)
        {
            t->next = p->next;
            p->next = p->next->next;
            t = t->next;
            p = p->next;
        }
        t->next = NULL;
        return newHead.next;
    }
};
