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
    vector<int> rightSideView(TreeNode* root) {
            vector<int>v;
        if(root==0) return v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int>vec;
            for(int i=0;i<n;i++){
            root=q.front();
            q.pop();
            if(root->left){
                q.push(root->left);
            }
                if(root->right){
                    q.push(root->right);
                }
                vec.push_back(root->val);
        }
            v.push_back(vec[vec.size()-1]);
            
    }
        return v;
    }
};