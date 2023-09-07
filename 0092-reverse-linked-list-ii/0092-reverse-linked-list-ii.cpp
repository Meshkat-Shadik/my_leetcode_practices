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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        ListNode* preHead = new ListNode(0);
        preHead->next = head;
        
        ListNode* back = preHead;
        
        for(int i=0;i<left-1; i++){
            back = back->next;
        }
        cout<<back->val<<endl;
        
        ListNode* curr = back->next;
        
        for(int i=0; i<right-left; i++){
            ListNode* front = curr->next;
            curr->next = front->next;
            front->next = back->next;
            back->next = front;
        }
        
        return preHead->next;
    }
};