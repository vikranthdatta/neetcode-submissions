class Node {
public:
string data;
Node* next;
Node* back;

    Node(string data1, Node* next1, Node* back1) {
        data = data1;
        next = next1;
        back = back1;
    }

    Node(string data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
class BrowserHistory {
public:
    Node* currpage;
    BrowserHistory(string homepage) {
        currpage = new Node(homepage);
    }
    
    void visit(string url) {
        Node* nextpage = new Node(url);
        currpage->next = nextpage;
        nextpage->back = currpage;
        currpage = currpage->next;
    }
    
    string back(int steps) {
        while(steps){
            if(currpage->back == nullptr){
                break;
            }
            else {
                currpage = currpage->back;
            }
            steps--;
        }
        return currpage->data;
    }
    
    string forward(int steps) {
        while(steps){
            if(currpage->next == nullptr){
                break;
            }
            else {
                currpage = currpage->next;
            }
            steps--;
        }
        return currpage->data;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */