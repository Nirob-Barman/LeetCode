#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> result(nums.size());
        int left = 0;
        int right = nums.size() - 1;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            int leftSqure = nums[left] * nums[left];
            int rightSqure = nums[right] * nums[right];
            if (leftSqure > rightSqure)
            {
                result[i] = leftSqure;
                left++;
            }
            else
            {
                result[i] = rightSqure;
                right--;
            }
        }
        return result;
    }
};

int main()
{
    vector<int> nums = {-4, -1, 0, 3, 10};
    Solution s;
    vector<int> result = s.sortedSquares(nums);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}