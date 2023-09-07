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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode *curr = head, *back = NULL, *front;
        while(curr){
            //current->next = back will destroy the front of the current
            //so we need to store this
            front = curr->next;
            //current to previous
            curr->next = back;
            //move previous to current (1 step forward)
            back = curr;
            //move current forward
            curr = front;
        }
        return back;
    }
};
