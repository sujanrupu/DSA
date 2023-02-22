//Link: https://leetcode.com/problems/maximum-depth-of-binary-tree/

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)  return 0;
        int countLeft = 1 + maxDepth(root->left);
        int countRight = 1 + maxDepth(root->right);
        int ans = max(countLeft, countRight);
        return ans;
    }
};
