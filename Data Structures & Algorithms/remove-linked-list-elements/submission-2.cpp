/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int k) {
        if (!head) return head;
        while (head and head->val==k) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
        ListNode* curr = head;
        ListNode* prev = nullptr;
        while (curr){
            if (curr->val==k){
                if (prev){
                    prev->next = curr->next;
                    delete curr;
                    curr = prev->next;
                    continue;
                }
            }
            prev = curr;
            curr = curr->next;
        }
        return head;
    }
};