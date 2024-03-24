#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<vector<int>> visited = matrix;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == 0)
                {
                    for (int k = 0; k < m; k++)
                    {
                        visited[i][k] = 0;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == 0)
                {
                    for (int k = 0; k < n; k++)
                    {
                        visited[k][j] = 0;
                    }
                }
            }
        }

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < m; j++)
        //     {
        //         matrix[i][j] = visited[i][j];
        //     }
        // }

        matrix = visited;
    }
};

int main()
{
    vector<vector<int>> matrix = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    Solution s;
    s.setZeroes(matrix);

    for (auto row : matrix)
    {
        for (auto col : row)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}