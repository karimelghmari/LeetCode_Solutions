/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
   if(list1==NULL)return list2;
   if(list2==NULL)return list1;
   struct ListNode*list3=NULL;
   if(list1->val<=list2->val){
    list3=list1;
    list1=list1->next;
   }
   else{
    list3=list2;
    list2=list2->next;
   }
   struct ListNode*p=list3;
   while(list1!=NULL && list2!=NULL){
    if(list1->val<=list2->val){
        p->next=list1;
        list1=list1->next;
    }
    else{
        p->next=list2;
        list2=list2->next;
    }
    p=p->next;
   }
   if(list1!=NULL)p->next=list1;
   else p->next=list2;
   return list3;
}