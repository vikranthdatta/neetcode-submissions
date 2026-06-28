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
    ListNode* rotateRight(ListNode* head, int k) {
        if( head == nullptr || head->next == nullptr || k <= 1) return head;
        ListNode* newHead = nullptr;
        int len = 1;
        ListNode* tail = head;
        while( tail->next != nullptr) {
            len++;
            tail = tail->next;
        }
        k = k % len;
        if( k ==0) return head;
        tail -> next = head;
        ListNode* temp = head;
        int cnt =1 ;
        while( temp!= nullptr) {
            if(cnt == len - k){
                newHead = temp->next;
                temp->next = nullptr;
                break;
            }
            cnt++;
            temp = temp->next;
        }
        return newHead;
    }
};