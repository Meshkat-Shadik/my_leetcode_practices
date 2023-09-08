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
        //bool res =true;
        
        while(f && f->next){
            s = s->next;
            f = f->next->next;
        }
       ListNode* mid = reverse(s->next);
        f = head;
        while(mid){
            if(mid->val != f->val){
                //res = false;
                //break;
                return false;
            }
            mid = mid->next;
            f = f->next;
        }
        //s->next = reverse(mid);        
        return true;
    }
};