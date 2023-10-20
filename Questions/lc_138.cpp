#pragma GCC optimize("Ofast,funroll-loops")
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return nullptr;
        Node* curr = head;
        while (curr) {
            Node* newNode = new Node(curr->val);
            newNode->next = curr->next;
            curr->next = newNode;
            curr = newNode->next;
        }
        curr = head;
        while (curr) {
            if (curr->random) {
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }
        curr = head;
        Node* newHead = head->next;
        Node* newCurr = newHead;
        while (curr) {
            curr->next = curr->next->next;
            curr = curr->next;
            if (curr) {
                newCurr->next = newCurr->next->next;
                newCurr = newCurr->next;
            }
        }

        return newHead;
    }
};