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
#define ll long long
class Solution {
public:
    ll tot=0,ans=0;
    ll totSum(TreeNode* root){
        if(!root) return 0;
        return totSum(root->right)+ totSum(root->left)+ root->val;
    }
    
    ll maxm(TreeNode* root){
        if(!root) return 0;
        ll l= maxm(root->left);
        ll r= maxm(root->right);
        ll up= tot-l-r-root->val;
        ll op1 = (l*((ll)root->val+r+up));
        ll op2 = (r*((ll)root->val+l+up));
        ll op3 = (up*((ll)root->val+r+l));
        ans = max(ans,max(op1,max(op2, op3)));
        return l+r+root->val;
    }
    int maxProduct(TreeNode* root) {
       tot= totSum(root); 
        maxm(root);
        return ans%1000000007;
    }
};