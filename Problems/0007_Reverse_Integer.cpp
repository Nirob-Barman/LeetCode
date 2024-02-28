#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        long long int ans = 0;

        while (x != 0)
        {
            ans = ans * 10 + x % 10;
            // cout << ans << endl;
            x = x / 10;
        }

        if (ans > INT_MAX || ans < INT_MIN)
        {
            return 0;
        }

        return ans;
    }
};

int main()
{
    Solution s;
    // cout << s.reverse(123) << endl; // 321
    cout << s.reverse(-123) << endl; // -321
    return 0;
}