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
    int ans;
    void inorder(TreeNode* root,int k,int &c){
        if(root==NULL) return;
        inorder(root->left,k,c);
        c++;
        if(c==k){
            ans = root->val;
            return;
        }
        inorder(root->right,k,c);
    }
    int kthSmallest(TreeNode* root, int k) {
        int c = 0;
        inorder(root,k,c);
        return ans;
    }
};