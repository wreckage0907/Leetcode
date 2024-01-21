class Solution {
public:
    void dfs(Node* root,vector<int>& res){
        if(root==NULL) return ;
        for(auto n:root->children) dfs(n,res);
        res.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        vector<int> res;
        dfs(root,res);
        return res;}
};