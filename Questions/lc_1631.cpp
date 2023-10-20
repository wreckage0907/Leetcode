#pragma GCC optimize("Ofast,unroll-loops")


class Solution {
public:
    struct Cell {
    int row, col, effort;
    Cell(int r, int c, int e) : row(r), col(c), effort(e) {}
    
    bool operator>(const Cell& other) const {
        return effort > other.effort;
    }
};

int minimumEffortPath(vector<vector<int>>& heights) {
    int rows = heights.size();
    int cols = heights[0].size();
    
    vector<int> dr = {-1, 1, 0, 0};
    vector<int> dc = {0, 0, -1, 1};
    
    vector<vector<int>> minEffort(rows, vector<int>(cols, INT_MAX));
    
    priority_queue<Cell, vector<Cell>, greater<Cell>> pq;
    
    pq.push(Cell(0, 0, 0));
    
    while (!pq.empty()) {
        Cell current = pq.top();
        pq.pop();
        
        int row = current.row;
        int col = current.col;
        int effort = current.effort;
        if (row == rows - 1 && col == cols - 1) {
            return effort;
        }
        minEffort[row][col] = effort;
        for (int i = 0; i < 4; ++i) {
            int newRow = row + dr[i];
            int newCol = col + dc[i];
            if (newRow >= 0 && newRow < rows && newCol >= 0 && newCol < cols) {
                int newEffort = max(effort, abs(heights[row][col] - heights[newRow][newCol]));
                if (newEffort < minEffort[newRow][newCol]) {
                    pq.push(Cell(newRow, newCol, newEffort));
                }
            }
        }
    }
    
    return 0;
}
};
