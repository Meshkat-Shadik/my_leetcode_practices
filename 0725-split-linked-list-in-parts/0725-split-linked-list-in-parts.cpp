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
    int findLen(ListNode* t){
        int count = 0;
        while(t){
             count++;
            t = t->next;
        }
        return count;
    }

    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int len = findLen(head);
        vector<ListNode*> ans(k,NULL);
        int parts = len/k;
        int extra = len%k;
        
        ListNode* curr = head;
        ListNode* prev = nullptr;
        
        for(int i=0; i<k && curr; i++, extra--){
            ans[i]=curr;
            for(int j=0; j<parts+(extra>0); j++){
                //this is for propagating
                prev = curr;
                curr = curr->next;
            }
            //disconnect the part
            if(prev){
                prev->next = NULL; 
            }
        }

        return ans;
    }
};