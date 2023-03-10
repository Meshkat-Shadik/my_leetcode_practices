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
    int len = 0;
    ListNode* store;
public:
    Solution(ListNode* head) {
        store = head;
        ListNode* temp = head;
        
        while(temp)
        {
            len++;
            temp = temp->next;
        }
    }
    
    int getRandom() {
        int randIndex = rand()%len;
        ListNode* temp = store;
        
        for(int i=0; i<randIndex ; i++)
        {
            temp = temp->next;
        }
        return temp->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */