/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    struct ListNode*p=head;
    int c=0,n=0;
    if(head==NULL)return NULL;
    while(p!=NULL){
        n++;
        p=p->next;
    }
    while(c<(k%n)){
        struct ListNode*T=NULL;
        p=head;
        while(p->next!=NULL){
            T=p;
            p=p->next;
        }
        p->next=head;
        head=p;
        T->next=NULL;
        c++;
    }
    return head;
    
}