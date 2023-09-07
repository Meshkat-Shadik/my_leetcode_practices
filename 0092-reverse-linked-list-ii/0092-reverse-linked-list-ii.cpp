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
        
        //setting the previous to exact point
        for(int i=0;i<left-1; i++){
            back = back->next;
        }
        //setting current
        ListNode* curr = back->next;
        
        //we only need right-left iteration,
        //each iteration one element should placed ok
        for(int i=0; i<right-left; i++){
            //store these because now all are going to be lost
            ListNode* front = curr->next;
            ListNode* backNext = back->next;
            ListNode* frontNext = front->next;
            
            
            //last of the three node is came to first
            back->next = front;
            
            //after came to the second, front need to attach to current which is stored
            //inside the backNext
            front->next = backNext;
            
            //then attach the current to the place where previously front was
            curr->next = frontNext;
            
        }
        
        return preHead->next;
    }
};