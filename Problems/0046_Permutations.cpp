#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> result;
        vector<bool> visited(nums.size(), false);
        vector<int> permutaion;

        // generatePermuations(nums, 0, nums.size() - 1, result);
        generatePermuationsBacktracking(nums, result, permutaion, visited);

        return result;
    }

private:
    void generatePermuations(vector<int> &nums, int start, int end, vector<vector<int>> &result)
    {
        if (start == end)
        {
            result.push_back(nums);
            return;
        }

        for (int i = start; i <= end; i++)
        {
            swap(nums[start], nums[i]);
            generatePermuations(nums, start + 1, end, result);
            swap(nums[start], nums[i]);
        }
    }

    void generatePermuationsBacktracking(vector<int> &nums, vector<vector<int>> &result, vector<int> &permutaion, vector<bool> &visited)
    {
        if (permutaion.size() == nums.size())
        {
            result.push_back(permutaion);
            return;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (!visited[i])
            {
                visited[i] = true;
                permutaion.push_back(nums[i]);
                generatePermuationsBacktracking(nums, result, permutaion, visited);
                permutaion.pop_back();
                visited[i] = false;
            }
        }
    }
};

int main()
{
    vector<int> nums = {1, 2, 3};
    // vector<int> nums = {0, -1, 1};
    Solution s;
    vector<vector<int>> result = s.permute(nums);

    // for (int i = 0; i < result.size(); i++)
    // {
    //     for (int j = 0; j < result[i].size(); j++)
    //     {
    //         cout << result[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for (auto row : result)
    {
        for (auto col : row)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}

// Initial Setup:

// result is an empty vector to store permutations.
// visited is initialized as [false, false, false].
// permutation is an empty vector.

// First Iteration (i=0):
// Select nums[0] (which is 1).
// Mark 1 as visited.
// Add 1 to the current permutation.
// Recursively call the function with the updated parameters.

// Second Iteration (i=1):
// Select nums[1] (which is 2).
// Mark 2 as visited.
// Add 2 to the current permutation.
// Recursively call the function with the updated parameters.
// Third Iteration (i=2):

// Select nums[2] (which is 3).
// Mark 3 as visited.
// Add 3 to the current permutation.
// Since the size of the permutation is now equal to the size of the input vector, add the permutation [1, 2, 3] to the result.

// Backtrack (remove 3):
// Pop the last element (3) from the current permutation.
// Mark 3 as not visited.

// Backtrack (remove 2):
// Pop the last element (2) from the current permutation.
// Mark 2 as not visited.

// Fourth Iteration (i=1):
// Select nums[1] again (which is 2).
// Mark 2 as visited.
// Add 2 to the current permutation.
// Recursively call the function with the updated parameters.

// Fifth Iteration (i=2):
// Select nums[2] again (which is 3).
// Mark 3 as visited.
// Add 3 to the current permutation.
// Since the size of the permutation is now equal to the size of the input vector, add the permutation [1, 3, 2] to the result.

// Backtrack (remove 3):
// Pop the last element (3) from the current permutation.
// Mark 3 as not visited.

// Backtrack (remove 2):
// Pop the last element (2) from the current permutation.
// Mark 2 as not visited.

// Sixth Iteration (i=0):
// Select nums[0] again (which is 1).
// Mark 1 as visited.
// Add 1 to the current permutation.
// Recursively call the function with the updated parameters.

// Seventh Iteration (i=2):
// Select nums[2] again (which is 3).
// Mark 3 as visited.
// Add 3 to the current permutation.
// Since the size of the permutation is now equal to the size of the input vector, add the permutation [2, 1, 3] to the result.

// Backtrack (remove 3):
// Pop the last element (3) from the current permutation.
// Mark 3 as not visited.

// Backtrack (remove 1):
// Pop the last element (1) from the current permutation.
// Mark 1 as not visited.
// The process continues, generating and backtracking to find all permutations.

// Final Result:
// The result vector contains all possible permutations: [[1, 2, 3], [1, 3, 2], [2, 1, 3], [2, 3, 1], [3, 1, 2], [3, 2, 1]]
