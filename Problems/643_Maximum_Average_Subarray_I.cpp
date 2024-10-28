#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        int n = nums.size();
        double sum = 0, maxSum = 0;
        for (int i = 0; i < k; i++)
        {
            sum += nums[i];
        }

        maxSum = sum;
        for (int i = k; i < n; i++)
        {
            sum += nums[i] - nums[i - k];
            maxSum = max(maxSum, sum);
        }

        return maxSum / k;
    }
};

int main()
{
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;
    Solution s;
    cout << s.findMaxAverage(nums, k) << endl;
    nums = {5};
    k = 1;
    cout << s.findMaxAverage(nums, k) << endl;
    return 0;
}