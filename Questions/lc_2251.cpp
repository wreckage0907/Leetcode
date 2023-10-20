#pragma GCC optimize('O3')
#define ll long long
#define pii pair<int, int>
#define mp make_pair
#define f first
#define s second

class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& persons) {
        vector<int> res(persons.size());
        vector<pair<pii, int>> events;
        for (auto& i : flowers) {
            events.push_back(mp(mp(i[0], 0), 1));
            events.push_back(mp(mp(i[1]+1, 0), -1));
        }
        for (int i=0; i<persons.size(); i++) {
            events.push_back(mp(mp(persons[i], 1), i));
        }
        int cur = 0;
        sort(events.begin(), events.end());
        for (auto& e : events) {
            if (e.f.s) res[e.s] = cur;
            else cur += e.s;
        }
        return res;
    }
};