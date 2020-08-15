/* The structure of the Linked list Node is as follows:
struct Node
{
    Node* next;
    int data;
}; */

/*Your method shouldn't print anything
 it should transform the passed linked list */
void sortList(Node** head)
{
    Node* prev = (*head); 
    Node* curr = (*head)->next; 
    while (curr != NULL) 
    { 
        if (curr->data < prev->data) 
        { 
            prev->next = curr->next; 
            curr->next = (*head); 
            (*head) = curr; 
            curr = prev; 
        } 
        else
            prev = curr; 
        curr = curr->next;
    }
}
/*
Node *curr=*head,*temp;
while(curr!=NULL){
    temp=curr->next;
    while(temp!=NULL){
        if(temp->data<curr->data){
            swap(curr->data,temp->data);
        }
        temp=temp->next;
    }
    curr=curr->next;
}
*/
