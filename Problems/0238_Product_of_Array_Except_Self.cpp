#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {

        int n = nums.size();
        vector<int> prefixproduct(n, 1);
        vector<int> suffixproduct(n, 1);

        for (int i = 1; i < n; i++)
        {
            prefixproduct[i] = prefixproduct[i - 1] * nums[i - 1];
        }

        for (auto i : prefixproduct)
        {
            cout << i << " ";
        }
        cout << endl;

        for (int i = n - 2; i >= 0; i--)
        {
            suffixproduct[i] = suffixproduct[i + 1] * nums[i + 1];
        }

        for (auto i : suffixproduct)
        {
            cout << i << " ";
        }
        cout << endl;

        for (int i = 0; i < n; i++)
        {
            nums[i] = prefixproduct[i] * suffixproduct[i];
        }

        return nums;
    }
};

int main()
{
    // vector<int> nums = {1, 2, 3, 4};
    // vector<int> result = Solution().productExceptSelf(nums);
    vector<int> nums = {-1, 1, 0, -3, 3};
    vector<int> result = Solution().productExceptSelf(nums);

    for (auto i : result)
    {
        cout << i << " ";
    }

    return 0;
}