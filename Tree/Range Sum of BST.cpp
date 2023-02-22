//Link: https://leetcode.com/problems/range-sum-of-bst/description/

class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==NULL)  return 0;
        else if(root->val < low) return rangeSumBST(root->right, low, high);
        else if(root->val > high)   return rangeSumBST(root->left, low, high);
        else return (root->val)+rangeSumBST(root->right, low, high)+rangeSumBST(root->left, low, high);
    }
};
