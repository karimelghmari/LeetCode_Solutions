/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 //
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int l=0,m=1;
    struct ListNode*p=head;
    while(p!=NULL)
    {
        l++;
        p=p->next;
    }
    struct ListNode*M=head;
    struct ListNode*T=M;
    while(m<=l-n)
    {
        T=M;
        M=M->next;
        m++;
    }
    if(l==1){
        return NULL;
    }
    if(l==n)
    {
        head=head->next;
    }
    T->next=M->next;
    M=NULL;
    return head;
    
}