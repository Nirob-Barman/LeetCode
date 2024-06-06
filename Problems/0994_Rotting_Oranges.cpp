#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int orangesRotting(vector<vector<int>> &grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

        queue<pair<int, int>> q;
        int freshOranges = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 2)
                {
                    q.push({i, j});
                }
                else if (grid[i][j] == 1)
                {
                    freshOranges++;
                }
            }
        }

        int minutes = 0;
        while (!q.empty())
        {
            int levelSize = q.size();
            bool rotten = false;

            while (levelSize--)
            {
                int i = q.front().first;
                int j = q.front().second;
                q.pop();

                for (auto dir : directions)
                {
                    int x = i + dir.first;
                    int y = j + dir.second;

                    if (x >= 0 && x < m && y >= 0 && y < n && grid[x][y] == 1)
                    {
                        grid[x][y] = 2;
                        q.push({x, y});
                        freshOranges--;
                        rotten = true;
                    }
                }
            }

            if (rotten)
                minutes++;
        }

        return freshOranges == 0 ? minutes : -1;
    }
};

int main()
{
    vector<vector<int>> grid = {{2, 1, 1}, {1, 1, 0}, {0, 1, 1}};
    Solution s;
    cout << s.orangesRotting(grid) << endl; // 4
    
    grid = {{2, 1, 1}, {0, 1, 1}, {1, 0, 1}};
    cout << s.orangesRotting(grid) << endl; // -1

    grid = {{0, 2}};
    cout << s.orangesRotting(grid) << endl; // 0
    return 0;
}