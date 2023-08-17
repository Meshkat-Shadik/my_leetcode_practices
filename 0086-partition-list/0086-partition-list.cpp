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
    ListNode* partition(ListNode* head, int x) {
        ListNode* head1 = new ListNode();
        ListNode* head2 = new ListNode();
        
        ListNode* it1 = head1;
        ListNode* it2 = head2;
        
        while(head){
            if(head->val < x){
                it1->next = head;
                it1 = it1->next;
            }
            else{
                it2->next = head;
                it2 = it2->next;
            }
            head = head->next;
        }
        it1->next = head2->next;
        it2->next = NULL;
        return head1->next;
    }
};