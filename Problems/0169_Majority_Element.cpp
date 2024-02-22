#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int majorityCount = nums.size() / 2;

        unordered_map<int, int> numsCount;

        for (auto num : nums)
        {
            numsCount[num]++;
        }

        int majorityElementByfreqCount = 0;
        for (auto num : numsCount)
        {
            if (num.second > majorityCount)
            {
                majorityElementByfreqCount = num.first;
            }
        }

        return majorityElementByfreqCount;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    // vector<int> nums = {3, 2, 3};
    cout << s.majorityElement(nums) << endl;
    return 0;
}