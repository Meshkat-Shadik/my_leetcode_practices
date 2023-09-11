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
    ListNode* reverse(ListNode* node){
        ListNode* back = NULL;
        while(node){
            ListNode* front = node->next;
            node->next = back;
            back = node;
            node = front;
        }
        return back;
    }
    int pairSum(ListNode* head) {
        ListNode* s = head, *f = head->next->next;
        while(f && f->next){
            s = s->next;
            f = f->next->next;
        }
        //as we don't need s,f so reuse them
        s = reverse(s->next);
        f = head;
        int maxx = INT_MIN;
        while(s){
            maxx = max(maxx,(f->val+s->val));
            f = f->next;
            s = s->next;
        }
        return maxx;
    }
};
