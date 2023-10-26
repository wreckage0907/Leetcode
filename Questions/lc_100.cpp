#pragma GCC optimize('O3')
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q) return true;    
        if (!p || !q) return false;
        bool right = isSameTree(p->right,q->right);
        bool left = isSameTree(p->left,q->left);
        return (p->val == q->val) && right && left;
    }
};