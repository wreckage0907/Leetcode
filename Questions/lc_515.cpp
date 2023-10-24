#pragma GCC optimize('Ofast,funroll-loops')
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        if(!root) return {};
        vector<int> res;
        deque<TreeNode*> q;
        q.push_back(root);
        while(!q.empty()) {
           int size = q.size();
           int rmax = INT_MIN;
           for(int i = 0; i < size; i++) {
               TreeNode* node = q.front();
               q.pop_front();
               rmax = max(rmax, node->val);
               if(node->left) q.push_back(node->left);
               if(node->right) q.push_back(node->right);
           }
           res.push_back(rmax);
        }
        return res;
    }
};