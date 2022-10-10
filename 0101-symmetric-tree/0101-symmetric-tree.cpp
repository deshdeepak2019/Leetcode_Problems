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
    bool isSymmetric(TreeNode* root) {
        return root==NULL or desh(root->left,root->right);
    }
    bool desh(TreeNode* left, TreeNode*right){
        if(left==0 or right==0){
            return left==right;
        }
        if(left->val!=right->val){
            return 0;
        }
        return desh(left->left,right->right) and desh(left->right,right->left);
    }
};