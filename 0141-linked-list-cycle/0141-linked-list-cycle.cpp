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
    bool hasCycle(ListNode *head) {
        if(head==NULL){
            return 0;
        }
        map<ListNode*,int>mp;
        while(head){
            if(mp[head]!=0){
                return true;
            }else{
                mp[head]=1;
                head=head->next;
            }
        }
        return false;
    }
};