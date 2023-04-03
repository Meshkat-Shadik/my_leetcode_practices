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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = new ListNode(0,head);
        ListNode* prev = temp;
        ListNode* n = head;
        while(n && n->next){
            if(n->val != n->next->val)
            {
                prev = n;
                n = n->next;
            }
            else
            {
                while(n->next && n->next->val == n->val)
                {
                    n = n->next;
                }
                prev->next = n->next;
                n = n->next;
            }
        }
        // cout<<prev->val<<endl;
        // cout<<n->val<<endl;
        return temp->next;
    }
};