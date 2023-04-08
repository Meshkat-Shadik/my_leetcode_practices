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
        unordered_map<Node*, Node*> m;
        Node* c  = head;
        Node* temp;
        while(c){
            temp = new Node(c->val);
            m[c] = temp;
            c = c->next;
        }
        c = head;
        while(c){
            temp = m[c];
            temp->next = m[c->next];
            temp->random = m[c->random];
            c = c->next;
        }
        return m[head];
    }
};