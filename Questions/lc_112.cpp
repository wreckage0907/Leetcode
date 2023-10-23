class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool left = false;
        bool right = false;
        if(root==nullptr) return false;
        if(root->left == nullptr && root->right == nullptr && (targetSum - root->val)==0) return true;
    left = hasPathSum(root->left , targetSum - root->val);
    right = hasPathSum(root->right , targetSum - root->val);

    return left || right;
    }
};