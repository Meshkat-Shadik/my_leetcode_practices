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

/*     curr   first   sec
         0 ->   1  ->  2   ->  3   ->  4
            
       curr    sec   first           //do this until all paired checked (!cur.next && !curr.next.next )
         0 ->   2   -> 1
         
       curr                  first    sec
         0 ->   2   -> 1   ->  3   ->  4
*/



class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head or !head->next) return head;
        
        ListNode* dummy = new ListNode();
        ListNode* curr, *first, *second;
        dummy->next = head;
        curr = dummy;
        
        while(curr->next && curr->next->next){
        first = curr->next;         //first = 1
        second = curr->next->next;  //sec = 2
        curr->next = second;        //curr.next  = 2  (1st)   (0-2)
        first->next = second->next;  //first.next = 3  (3rd)   (1-3)
        second->next = first;       //second.next = 1 (2nd)   (2-1)
        //now current should go to 1
        curr = curr->next->next;
        }
        return dummy->next;
    }
};