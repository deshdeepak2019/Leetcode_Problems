/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL){
            return NULL;
        }
        map<ListNode*,int>mp;
        while(head){
            if(mp[head]!=0){
                return head;
            }else{
                mp[head]=1;
                head=head->next;
            }
        }
        return NULL;
    }
};