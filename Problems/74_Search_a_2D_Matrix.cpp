#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int row = matrix.size();
        int col = matrix[0].size();

        int low = 0;
        int high = row * col - 1;

        while (low <= high)
        {
            int mid = (low + high) / 2;
            int element = matrix[mid / col][mid % col];

            if (element == target)
            {
                return true;
            }
            else if (target > element)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        return false;
    }
};

int main()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 3;
    Solution s;
    cout << s.searchMatrix(matrix, target) << endl; // true
    matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    target = 13;
    cout << s.searchMatrix(matrix, target) << endl; // false
    return 0;
}