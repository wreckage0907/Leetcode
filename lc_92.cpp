class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* du=new ListNode(0,head);
        ListNode* prev=du;
        ListNode* curr=head;
        for(int i=0;i<left-1;i++) {
            prev=curr;
            curr=curr->next;
            }
        ListNode* temp;
        for(int j=0;j<right-left+1;j++){
            ListNode* tnb=curr->next;
            curr->next=temp;
            temp=curr;
            curr=tnb;
        }
        prev->next->next=curr;
        prev->next=temp;

        return du->next;
        
    }
};