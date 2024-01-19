class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode();
        ListNode* curr=dummy;
        int carry=0;
        while(l1 || l2 || carry){
            int v1=0,v2=0;
            if(l1) v1=l1->val;
            if(l2) v2=l2->val;

            int val=v1+v2+carry;
            carry=val/10;
            val%=10;
            curr->next=new ListNode(val);

            curr=curr->next;
            if (l1) l1=l1->next; 
            else l1=NULL;
            if(l2) l2=l2->next;
            else l2=NULL;

        }
        return dummy->next;
            }
};