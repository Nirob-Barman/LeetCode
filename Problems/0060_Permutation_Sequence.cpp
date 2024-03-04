#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string getPermutation(int n, int k)
    {
        // string result;

        // for (int i = 1; i <= n; i++)
        // {
        //     // result += to_string(i);
        //     result.push_back(i + '0');
        //     // cout << result << endl;
        // }

        // for (int i = 1; i < k; i++)
        // {
        //     // cout << result << endl;
        //     next_permutation(result.begin(), result.end());
        // }

        // return result;

        string result;
        vector<int> nums;

        for (int i = 1; i <= n; i++)
        {
            nums.push_back(i);
        }

        int counter = 0;
        vector<bool> visited(nums.size(), false);
        vector<int> permutaion;
        generatePermuationsBacktracking(nums, result, permutaion, visited, counter, n, k);

        return result;
    }

    void generatePermuationsBacktracking(vector<int> &nums, string &result, vector<int> &permutaion, vector<bool> &visited, int &counter, int n, int k)
    {
        if (permutaion.size() == n)
        {
            counter++;
            if (counter == k)
            {
                for (int i = 0; i < permutaion.size(); i++)
                {
                    result += to_string(permutaion[i]);
                }
            }
            return;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (!visited[i])
            {
                visited[i] = true;
                permutaion.push_back(nums[i]);
                generatePermuationsBacktracking(nums, result, permutaion, visited, counter, n, k);
                permutaion.pop_back();
                visited[i] = false;
            }
        }
    }
};

int main()
{
    Solution s;
    cout << s.getPermutation(3, 3) << endl;
    cout << s.getPermutation(4, 9) << endl;
    cout << s.getPermutation(3, 1) << endl;
    cout << s.getPermutation(3, 5) << endl;
    return 0;
}