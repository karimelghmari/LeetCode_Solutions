/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode*p=head;
    int c=0,q=0;
    while(p!=NULL){
        c++;
        p=p->next;
        }
    if(head==NULL||c==1) return NULL;
    if(n==c){
        head=head->next;
        return head;
    }
    if(n==1&&c!=n){
        struct ListNode*T=head;
        while(T->next->next!=NULL){
            T=T->next;
        }
        T->next=NULL;
        return head;
    }
    else if(n>1){
        c=c-n;
        p=head;
        while(q<c-1){
            q++;
            p=p->next;
        }
        struct ListNode*T=p;
        T=p->next;
        p->next=T->next;
        return head;
    }
    return head;
}       
    
