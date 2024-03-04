#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        k = k % n; // to handle k > n and ensure k is less than n (from 0 to n - 1)

        reverse(nums.begin(), nums.end());

        // reverse the first k elements
        reverse(nums.begin(), nums.begin() + k);

        // reverse the rest of the elements
        reverse(nums.begin() + k, nums.end());
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    Solution s;
    // s.rotate(nums, 3);
    s.rotate(nums, 2);

    for (auto i : nums)
    {
        cout << i << " ";
    }

    return 0;
}