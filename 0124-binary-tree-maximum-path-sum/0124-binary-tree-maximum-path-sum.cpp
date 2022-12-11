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
     int maxx= INT_MIN;
        maxPath(root, maxx);
        return maxx;
    }
    
    int maxPath( TreeNode* node, int &maxx){
         if(!node)
        return 0;
        int l= max(0, maxPath(node->left, maxx));
        int r= max(0, maxPath(node->right, maxx));
        maxx= max(l+r+ node->val, maxx);
        return max(l,r)+ node->val;
    }
};