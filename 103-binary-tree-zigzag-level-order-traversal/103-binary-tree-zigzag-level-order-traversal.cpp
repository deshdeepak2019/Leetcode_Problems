/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==0) return ans;
        queue<TreeNode*>q;
        q.push(root);
        bool lfr=true;
        while(!q.empty()){
            int n=q.size();
            vector<int>v(n);
            for(int i=0;i<n;i++){
                root=q.front();
                q.pop();
                int index=0;
                if(lfr==true){
                    index=i;
                }else{
                    index=n-i-1;
                }
                v[index]=root->val;
                if(root->left) q.push(root->left);
                if(root->right) q.push(root->right);
            }
            ans.push_back(v);
            lfr=!lfr;
        }
        return ans;
    }
};