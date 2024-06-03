#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> triangle;
        for (int row = 1; row <= numRows; row++)
        {
            long long ans = 1;
            vector<int> rows;
            rows.push_back(1);
            for (int col = 1; col < row; col++)
            {
                ans = ans * (row - col);
                ans = ans / (col);
                rows.push_back(ans);
            }

            triangle.push_back(rows);
        }
        return triangle;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> ans = s.generate(5);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}