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
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        desh(root,ans);
        return ans;
    }
   int desh(TreeNode* root, int &ans){
        if(root==0) return 0;
        int l=desh(root->left,ans);
        if(l<0){
            l=0;
        }
        int r=desh(root->right,ans);
        if(r<0){
            r=0;
        }
        ans=max(ans,l+r+root->val);
        return root->val+max(l,r);
    }
};