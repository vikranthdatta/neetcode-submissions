/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp = head;
        while(temp!= nullptr){
            Node* copyNode = new Node(temp->val);
            copyNode->next = temp->next;;
            temp->next = copyNode;
            temp = temp->next->next;
        }
        Node* temp2 = head;
        while(temp2!=nullptr){
            Node* copyNode = temp2->next;
            if(temp2->random == nullptr) copyNode->random = temp2->random;
            else copyNode->random = temp2->random->next;
            temp2 = temp2->next->next;
        }
        Node* dummy = new Node(-1);
        Node* mover = dummy;
        Node* tmp = head;
        while(tmp!= nullptr){
            mover->next = tmp->next;
            tmp->next = tmp->next->next;
            mover = mover->next;
            tmp = tmp->next;
        }
        return dummy->next;
    }
};
