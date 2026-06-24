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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* dummy = new ListNode(-1);
        ListNode* mover = dummy;
        if(l1 == nullptr) return l2;
        if(l2 == nullptr) return l1;
        int carry =0;
        while(temp1!= nullptr || temp2!= nullptr || carry!=0){
            int sum =carry;
            if(temp1!=nullptr){
                sum = sum+ temp1->val;
                temp1= temp1->next;
            }
            if(temp2!=nullptr){
                sum =sum + temp2->val;
                temp2 = temp2->next;
            }
            carry =sum/10;
            ListNode* new_dummy = new ListNode(sum%10);
            mover->next = new_dummy;
            mover = new_dummy;
        }
        return dummy->next;
    }
};
