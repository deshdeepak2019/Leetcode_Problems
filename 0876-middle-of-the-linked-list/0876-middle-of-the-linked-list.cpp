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
    ListNode* middleNode(ListNode* head) {
        if(head==0) return 0;
        ListNode* slow=head,*fast=head;
        while(fast!=0 and fast->next!=0){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};