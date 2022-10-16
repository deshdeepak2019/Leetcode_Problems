class Solution {
public:
    void deleteNode(ListNode* node) {
        if(node->next==NULL) delete node;
       //  swap(node->val,node->next->val);
       // // ListNode* temp2=node->next;
       //  node->next=node->next->next;
       //  //delete temp2;
        int val=node->next->val;
        node->next=node->next->next;
        node->val=val;
    }
    
};