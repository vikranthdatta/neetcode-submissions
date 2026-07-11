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
    ListNode* reverse(ListNode* head){
        ListNode* temp = head;
        ListNode* prev = nullptr;
        while(temp!= nullptr){
            ListNode* nextNode = temp->next;
            temp->next =prev;
            prev = temp;
            temp = nextNode;
        }
        return prev;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head) return head;
        if (left == right) return head;
        ListNode* temp = head;
        int count =1;
        int need_length = right- left;
        ListNode* beforeLeft = nullptr;

        while(temp != nullptr){
            if(count == left) break;
            beforeLeft = temp;
            temp = temp->next;
            count++;
        }

        ListNode* temp1 = temp;
        while(need_length!=0){
            temp1 = temp1->next;
            need_length--;
        }
        ListNode* second_half = temp1->next;
        temp1->next = nullptr;
        ListNode* new_list = reverse(temp);
        ListNode* temp3 = new_list;
        while(temp3->next!=nullptr){
            temp3 = temp3->next;
        }
        temp3->next = second_half;
        if(beforeLeft){
            beforeLeft->next = new_list;
        }
        else {
            head = new_list;
        }

        return head;


    }
};