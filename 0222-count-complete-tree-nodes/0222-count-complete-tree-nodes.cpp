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
   int hleft(TreeNode* root){
       int hght=0;
       if(root==0) return 0;
       while(root){
           hght++;
           root=root->left;
       }
       return hght;
   }
    int hright(TreeNode* root){
       int hght=0;
       if(root==0) return 0;
       while(root){
           hght++;
           root=root->right;
       }
       return hght;
   }
    int countNodes(TreeNode* root) {
        // if(root==0){
        //     return 0;
        // }
        // ans++;
        // countNodes(root->left);
        // countNodes(root->right);
        // return ans;
        if(!root) return 0;
        int l=hleft(root);
        int r=hright(root);
        if(l==r){
            return (1<<l)-1;
        }
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};