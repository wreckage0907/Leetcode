class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        if(root == nullptr) return 0;
        int maxSum = root->val;
        int ml = 1; 
        int cl = 1;

        std::queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int count = q.size();
            int sum = 0;

            while(count--){
                TreeNode* temp = q.front();
                q.pop();
                sum += temp->val;

                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }

            if (sum > maxSum) {
                maxSum = sum;
                ml = cl;
            }

            cl++;
        }

        return ml;
    }
};