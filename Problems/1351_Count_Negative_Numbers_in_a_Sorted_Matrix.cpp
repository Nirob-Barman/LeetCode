#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int negatives = 0;

        // for(auto row: grid)
        // {
        //     for(auto col: row)
        //     {
        //         if(col < 0)
        //         {
        //             negatives++;
        //         }
        //     }
        // }

        for (int i = 0; i < grid.size(); i++)
        {
            // for (int j = 0; j < grid[i].size(); j++)
            // {
            //     if (grid[i][j] < 0)
            //     {
            //         negatives++;
            //     }
            // }
            // cout << negatives << endl;
            negatives += binarySearch(grid[i]);
        }

        return negatives;
    }

    int binarySearch(vector<int> &row)
    {
        int low = 0, high = row.size() - 1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (row[mid] >= 0)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        // cout << row.size() << " " << low << " " << high << " " << endl;
        return row.size() - low;
    }
};

int main()
{
    vector<vector<int>> grid = {{4, 3, 2, -1}, {3, 2, 1, -1}, {1, 1, -1, -2}, {-1, -1, -2, -3}};
    cout << Solution().countNegatives(grid) << endl; // 8

    grid = {{3, 2}, {-1, -2}};
    cout << Solution().countNegatives(grid) << endl; // 2
    return 0;
}