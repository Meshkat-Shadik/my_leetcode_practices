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
    
    ListNode* reverse(ListNode* node){
        ListNode* back = NULL;
        while(node){
            ListNode* front = node->next;
            node->next = back;
            back = node;
            node = front;
        }
        return back;
    }
    
public:
    bool isPalindrome(ListNode* head) {
        
        if(!head || !head->next) return head;
        
        ListNode* s = head;
        //we need the middle's previous position, that why incrementing f at first
        ListNode* f = head->next->next; 
        ListNode* prev = head;
        
        //bool res =true;  //we need this, if we are asked to no change of input linked-list after checking
        
        while(f && f->next){
            s = s->next;
            f = f->next->next;
        }
        //here we found the mid node with reversed state
       ListNode* mid = reverse(s->next);
        //as we don't need f any more, instead of creating another node, we just reuse it
        f = head;
        while(mid){
            if(mid->val != f->val){
                //we need this two line, if we are asked to no change of input linked-list after checking
                //res = false;
                //break;
                return false;
            }
            mid = mid->next;
            f = f->next;
        }
        //we need this line, if we are asked to no change of input linked-list after checking
        //s->next = reverse(mid);        //it just reverse again and attach to the mid. 
        return true;
    }
};
