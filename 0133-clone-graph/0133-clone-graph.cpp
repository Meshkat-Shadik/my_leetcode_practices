/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* n) {
       if(!n) return NULL;
        unordered_map<Node*,Node*>m;
        Node* temp = new Node(n->val,{});
        m[n]=temp;
        queue<Node*> q;
        q.push(n);
        while(!q.empty()){
            Node* c = q.front();
            q.pop();
            for(Node* nei:c->neighbors){
                if(m.find(nei)==m.end()){
                    //not found same node
                    //so new node
                    m[nei] = new Node(nei->val,{});
                    q.push(nei);
                }
                //found/not found both case
                //add the nei
                m[c]->neighbors.push_back(m[nei]);
            }
        }
        return temp;
    }
};