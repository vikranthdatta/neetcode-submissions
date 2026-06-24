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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int cnt =0 ;
        while(temp!=nullptr){
            cnt++;
            temp = temp->next;
        }
        if( cnt == n){
            ListNode* temphead= head;
            head = head->next;
            delete temphead;
        }
        ListNode* temp1 = head;
        int res = cnt-n;
        while(temp1!=nullptr){
            res--;
            if(res==0){
                ListNode* ans = temp1->next;
                temp1->next = temp1->next->next;
                delete ans;

            }
            temp1 = temp1->next;
        }
        return head;
    }
};
