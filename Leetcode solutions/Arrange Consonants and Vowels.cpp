struct Node* arrange(Node *head)
{
   //Code here
   if(!head && !head->next) return head;
   Node *v=NULL,*vstart;
   Node *c=NULL,*cstart;
   while(head!=NULL){
       if(head->data=='a' || head->data=='e' || head->data=='i'|| head->data=='o' ||head->data =='u'){
           if(v==NULL){
               vstart=head;
               v=head;
           }else{
               v->next=head;
               v=v->next;
           }
       }
       else{
           if(c==NULL){
               cstart=head;
               c=head;
           }else{
               c->next=head;
               c=c->next;
           }
       }
       head=head->next;
   }
   //c->next=NULL;
   if(v==NULL){
       c->next=NULL;
       return cstart;
   }
   if(c==NULL){
       v->next=NULL;
       return vstart;
   }
   c->next=NULL;
   v->next=cstart;
   return vstart;
}
