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
    ListNode* deleteMiddle(ListNode* head) {
        //only one element
        if(head==nullptr||head->next==nullptr) return nullptr;
        
        ListNode* s = head;
        //as we need one back from the middle, we just propagate
        //the fast initially over one step extra
        ListNode* f = head->next->next;
        while(f && f->next){
            s = s->next;
            f = f->next->next;
        }
        s->next = s->next->next;
        return head;
    }
};