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
    int diameterOfBinaryTree(TreeNode* root) {
        int maxx=0;
       desh(root,maxx);
        return maxx;
    }
    int desh(TreeNode* root,int &maxx){
        if(root==NULL)
            return 0;
        int l=desh(root->left,maxx);
        int r=desh(root->right,maxx);
        maxx=max(maxx,l+r);
        return 1+max(l,r);
    }
};