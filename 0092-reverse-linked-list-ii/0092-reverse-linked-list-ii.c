/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    struct ListNode*p=NULL,*q=NULL,*T=NULL,*A=NULL,*pre=NULL;
    int c=0;
    if(head==NULL||left==right)return head;
    else{
        p=head;
        c=1;
        while(c<left){
            pre=p;
            p=p->next;
            c++;
        }
        q=p;
        T=p->next;
        A=T->next;
        while(c<right-1){
            T->next=q;
            q=T;
            T=A;
            A=A->next;
            c++;
        }
        T->next=q;
        if(left==1){
            head=T;
        }
        else{
            pre->next=T;
        }
        p->next=A;
    }
    return head;
}