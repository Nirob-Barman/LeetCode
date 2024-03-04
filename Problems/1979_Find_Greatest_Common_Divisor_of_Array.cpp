#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int findGCD(vector<int> &nums)
    {
        // int max = *max_element(nums.begin(), nums.end());
        // int min = *min_element(nums.begin(), nums.end());

        int max = nums[0];
        int min = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > max)
            {
                max = nums[i];
            }

            if (nums[i] < min)
            {
                min = nums[i];
            }
        }

        return gcd(max, min);
    }

    int gcd(int a, int b)
    {
        if (b == 0)
        {
            return a;
        }

        return gcd(b, a % b);
    }
};

int main()
{
    vector<int> nums = {2, 5, 6, 9, 10};
    cout << Solution().findGCD(nums) << endl;
    return 0;
}