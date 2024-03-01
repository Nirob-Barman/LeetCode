#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string triangleType(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int a = nums[0], b = nums[1], c = nums[2];

        // sum of two short sides should be greater than third side
        if (a + b <= c)
        {
            return "none";
        }

        if (a == b && b == c)
        {
            return "equilateral";
        }

        if (a != b && b != c && c != a)
        {
            return "scalene";
        }

        return "isosceles";
    }
};

int main()
{
    vector<int> nums = {3, 3, 3};
    Solution s;
    cout << s.triangleType(nums) << endl; // equilateral

    nums = {1, 2, 3};
    cout << s.triangleType(nums) << endl; // none

    nums = {3, 4, 5};
    cout << s.triangleType(nums) << endl; // scalene

    nums = {2, 2, 5};
    cout << s.triangleType(nums) << endl; // isosceles
    return 0;
}