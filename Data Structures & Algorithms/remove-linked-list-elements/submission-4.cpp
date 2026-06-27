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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr) return head;
        while(head && head->val == val){
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
        if(head == nullptr) return head;
        ListNode* prev = head;
        ListNode* temp = head->next;
        while(temp!=nullptr){
            if (temp->val == val){
                ListNode* toDelete = temp;
                temp = temp->next;
                prev->next = temp;
                delete toDelete;
            }
            else{
                prev = temp;
                temp = temp->next;
            }
        }
        return head;
    }
};