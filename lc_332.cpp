#pragma GCC optimize("O3")
class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
       unordered_map<string,multiset<string>> s1;
       vector <string> ans;
       int n=tickets.size();
       for(int i=0;i<n;i++){
         s1[tickets[i][0]].insert(tickets[i][1]);
       }
       stack <string> m;
       m.push("JFK");
       while(!m.empty()){
         string src=m.top();
         if(s1[src].size()==0){
           ans.push_back(src);
           m.pop();
         }
         else{
           auto dst=s1[src].begin();
           m.push(*dst);
           s1[src].erase(dst);

         }
       }
       reverse(ans.begin(),ans.end());
       return ans;

    }
};