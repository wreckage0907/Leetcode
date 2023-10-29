class Solution {
public:
    int height(TreeNode* root, int& diam){
        if(!root) return 0;
        int lh = height(root->left , diam);
        int rh = height(root->right , diam);

        diam = max(lh+rh , diam);

        return 1+max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        height(root,diameter);
        return diameter;
    }
};