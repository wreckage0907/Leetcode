#pragma GCC optimize("O3")
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> l1;
        ListNode* curr = head;
        int n = 0;
        while (curr) {
            n++;
            curr = curr->next;
        }
        int size = n / k, left = n % k;
        curr = head;
        ListNode* prev;
        for (int i = 0; i < k; i++) {
            l1.push_back(curr);
            for (int j = 0; j < size && curr; j++) { 
                prev = curr;
                curr = curr->next;
            }
            if (left > 0 && curr) {
                prev = curr;
                curr = curr->next;
                left--;
            }
            if (prev) prev->next = nullptr;
        }
        return l1;
    }
};