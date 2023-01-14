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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int length = 0, i=1;
        
        while(temp!=NULL){
            temp=temp->next;
            length++;
        }
       int position = length-n;
        
        if(length==n) return head->next;
       
        temp = head;
        while(i<position){
            temp= temp->next;
            i++;
        }
        //cout<<temp->val<<endl;
        temp->next = temp->next->next;
        
        return head;
    }
};