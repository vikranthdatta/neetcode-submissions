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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if ( head == nullptr || head->next == nullptr || k <= 1) return head;
        ListNode* temp = head;
        ListNode* prevNode = nullptr;
        while( temp != nullptr){
            ListNode* kthNode = getKthNode(temp , k);
            if(kthNode == nullptr) {
                if(prevNode != nullptr) prevNode->next = temp;
                break;
            }
            ListNode* nextNode = kthNode->next;
            kthNode->next = nullptr;
            reverse(temp);
            if(temp == head) head = kthNode;
            else {
                prevNode->next = kthNode;
            }
            prevNode= temp;
            temp = nextNode;
        }
        return head;
    }
private: 
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

    ListNode* getKthNode(ListNode* head, int k){
        ListNode* temp = head;
        for(int i=0;i<k-1 && temp!= nullptr;i++){
            temp = temp->next;
        }
        return temp;
    }
};
