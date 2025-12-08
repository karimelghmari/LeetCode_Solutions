/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head==NULL) return NULL;
    struct ListNode*p=head,*T=p;
    int l[100],i=0,c,dup;
    l[i]=p->val;
    i++;
    p=p->next;
    while(p!=NULL){
        dup=0;
        for(c=0;c<i;c++){
            if(p->val==l[c]){
                T->next=p->next;
                dup=1;
                break; 
                }
            }
        if(!dup){
            l[i]=p->val;
            i++;
            T=p;
        }
        
        p=p->next;
        }
    
    
    return head;
}