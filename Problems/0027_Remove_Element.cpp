#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int i = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] != val)
            {
                nums[i++] = nums[j];
            }
        }

        return i;
    }
};

int main()
{
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    Solution s;
    cout << s.removeElement(nums, 2) << endl;
    return 0;
}