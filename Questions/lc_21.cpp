#pragma GCC Optimize("Ofast")
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode *tail = &dummy;
        
        while (list1 && list2) {
            ListNode *&node = list1->val < list2->val ? list1 : list2;
            tail = tail->next = node;
            node = node->next;
        }
        
        tail->next = list1 ? list1 : list2;
        
        return dummy.next;
    }
};