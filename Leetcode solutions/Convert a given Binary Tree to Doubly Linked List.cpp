// This function should return head to the DLL
void DLL(Node *root,Node *&head,Node *&prev){
    if(root==nullptr) return;
    DLL(root->left,head,prev);
    root->left=prev;
    if(!prev) head=root;
    else{
        prev->right=root;
    }
    prev=root;
    DLL(root->right,head,prev);
}
Node * bToDLL(Node *root)
{
    // your code here
    Node *head=NULL;
    Node *prev=NULL;
    DLL(root,head,prev);
    return head;   
}
