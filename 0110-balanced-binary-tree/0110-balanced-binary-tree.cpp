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
    bool isBalanced(TreeNode* root) {
        if(Height(root)==-1){
            return false;
        }
        return true;
    }
    int Height(TreeNode* root){
        if(root==NULL){return 0;}
        int leftHeight = Height(root->left);
        if(leftHeight==-1){return -1;}
        int rightHeight = Height(root->right);
        if(rightHeight==-1){return -1;}

        if(abs(leftHeight-rightHeight)>1){return -1;}
        return 1+max(leftHeight,rightHeight);
    }

};