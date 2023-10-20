#pragma GCC optimize("Ofast,funroll-loops")
struct Edge {
    int destination;
    int weight;
    
    Edge(int dest, int w) : destination(dest), weight(w) {}
    
    bool operator>(const Edge& other) const {
        return weight > other.weight;
    }
};

class Solution {
public:
    int minCostConnectPoints(const vector<vector<int>>& points) {
        const int n = points.size();
        unordered_map<int, vector<Edge>> adj;

        // Create the adjacency list
        for (int i = 0; i < n; i++) {
            int a1 = points[i][0], b1 = points[i][1];
            for (int j = i + 1; j < n; j++) {
                int a2 = points[j][0], b2 = points[j][1];
                int dist = abs(a1 - a2) + abs(b1 - b2);
                adj[i].emplace_back(j, dist);
                adj[j].emplace_back(i, dist);
            }
        }

        int res = 0;
        set<int> visited;
        priority_queue<Edge, vector<Edge>, greater<Edge>> pq;

        // Start from the first point
        pq.push({0, 0});

        while (!pq.empty() && visited.size() < n) {
            Edge edge = pq.top();
            pq.pop();

            if (visited.count(edge.destination))
                continue;

            visited.insert(edge.destination);
            res += edge.weight;

            for (const auto& neighbor : adj[edge.destination]) {
                if (!visited.count(neighbor.destination)) {
                    pq.push(neighbor);
                }
            }
        }

        return res;
    }
};