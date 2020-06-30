/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* gettail(Node* head){   
        Node* prev = nullptr;
        while(head!=nullptr){
            prev = head;
            head = head->next;
        }
        return prev;
    }
    Node* flatten(Node* head) {
        if(head==nullptr) return head;
        Node* curr = head;
        while(curr!=nullptr){
            
            if(curr->child!=nullptr){
                Node* tail = gettail(curr->child);
                tail->next = curr->next;
                if(curr->next!=nullptr)
                    curr->next->prev = tail;
                curr->next = curr->child;
                curr->child->prev = curr;
                curr->child = nullptr;
            }
            curr = curr->next;
            
        }
        return head;
    }
};
