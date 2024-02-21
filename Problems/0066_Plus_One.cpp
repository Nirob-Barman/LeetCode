#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        // vector<int> ans;
        // for (int i = 0; i < digits.size(); i++)
        // {
        //     ans.push_back(digits[i]);
        // }

        // vector<int> ans(digits);

        vector<int> ans(digits.begin(), digits.end());

        // for (auto dig : ans)
        // {
        //     cout << dig << endl;
        // }

        for (int i = ans.size() - 1; i >= 0; i--)
        {
            ans[i]++;
            if (ans[i] == 10)
            {
                ans[i] = 0;
            }
            else
            {
                // No carry, so we can stop here
                break;
            }
        }

        // If there's still a carry after the loop,
        if (ans[0] == 0)
            ans.insert(ans.begin(), 1);

        for (auto dig : ans)
        {
            cout << dig;
        }
        cout << endl;

        return ans;
    }
};

int main()
{
    Solution s;
    // vector<int> digits({1, 2, 3});
    vector<int> digits({9});
    s.plusOne(digits);
    return 0;
}