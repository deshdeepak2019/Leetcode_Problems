/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// class Solution {
// public:
//     bool desh1(TreeNode* root, vector<TreeNode*>&arr1,TreeNode* p){
//      if(root==0) return 0;
//      arr1.push_back(root);
//      if(root==p){
//          return true;
//      }
//      if(desh(root->left,arr1,p) or desh(root->right,arr1,p)) return true;
//      arr1.pop_back();
//      return false;
//  }
//     bool desh(TreeNode* root, vector<TreeNode*>&arr2,TreeNode* q){
//      if(root==0) return 0;
//      arr2.push_back(root);
//      if(root==q){
//          return true;
//      }
//      if(desh(root->left,arr2,q) or desh(root->right,arr2,q)) return true;
//      arr2.pop_back();
//      return false;
//  }
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         vector<TreeNode*>arr1,arr2;
//        desh(root,arr1,p);
//        desh1(root,arr2,q);
//         // reverse(arr1.begin(),arr1.end());
//         // reverse(arr2.begin(),arr2.end());
//         // if()
//         for(int i=min(arr1.size()-1,arr2.size()-1);i>=0;i--){
//             if(arr1[i]!=arr2[i]){
//                 return arr2[i-1];
//             }
//         }
//         return root;
//     }
// };


// BETTER APPROACH

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        if(root == NULL || root == q || root == p) return root;

        TreeNode *left = lowestCommonAncestor(root->left,p,q);
        TreeNode *right = lowestCommonAncestor(root->right,p,q);

        if(left == NULL){
            return right;
        }else if(right == NULL){
            return left;
        }else{
            return root;
        }
    }
};