#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
class Solution {
public:
    int sum(TreeNode* root) {
        if (root == nullptr) return 0;
        return root->val + sum(root->left) + sum(root->right);
    }

    int findTilt(TreeNode* root) {
        if (root == nullptr) return 0;

        int leftSum = sum(root->left);
        int rightSum = sum(root->right);

        int tilt = abs(leftSum - rightSum);

        return tilt + findTilt(root->left) + findTilt(root->right);
    }
};