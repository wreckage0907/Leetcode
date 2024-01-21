class Solution {
public:
    void dfs(Node* root,vector<int>& res){
        if(root==NULL) return ;
        res.push_back(root->val);
        for(auto n:root->children) dfs(n,res);
    }
    vector<int> preorder(Node* root) {
        vector<int> res;
        dfs(root,res);
        return res;}
};
