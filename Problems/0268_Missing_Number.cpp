#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int sum = n * (n + 1) / 2;
        for (int i = 0; i < n; i++)
        {
            sum -= nums[i];
        }
        return sum; // here, sum is the missing number
    }
};

int main()
{
    vector<int> nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    Solution s;
    cout << s.missingNumber(nums) << endl;
    return 0;
}