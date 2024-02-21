#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            ans = ans ^ nums[i];
        }
        return ans;
    }
};

int main()
{
    // vector<int>nums({2, 2, 1});
    vector<int> nums({4, 1, 2, 1, 2});
    // vector<int> nums({1});
    Solution s;
    cout << s.singleNumber(nums) << endl;
    return 0;
}