#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isArraySpecial(vector<int> &nums)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if ((nums[i] % 2) == (nums[i + 1] % 2))
            {
                return false;
            }
        }

        return true;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {3, 5};
    cout << s.isArraySpecial(nums) << endl; // false
    nums = {4, 3, 1, 6};
    cout << s.isArraySpecial(nums) << endl; // false
    nums = {3};
    cout << s.isArraySpecial(nums) << endl; // true
    return 0;
}