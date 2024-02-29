#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string multiply(string num1, string num2)
    {
        if (num1 == "0" || num2 == "0")
        {
            return "0";
        }

        int len1 = num1.size();
        int len2 = num2.size();

        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());

        vector<int> ans(len1 + len2, 0);

        for (int i = 0; i < len1; i++)
        {
            for (int j = 0; j < len2; j++)
            {
                ans[i + j] += (num1[i] - '0') * (num2[j] - '0');
                ans[i + j + 1] += ans[i + j] / 10;
                ans[i + j] %= 10;
            }
        }

        int len = len1 + len2;
        len -= 1;

        while (len >= 0 && ans[len] == 0)
            len--;

        string res = "";

        for (int i = len; i >= 0; i--)
        {
            res += to_string(ans[i]);
        }

        return res;
    }
};

int main()
{
    Solution s;
    cout << s.multiply("12", "0") << endl;    // 0
    cout << s.multiply("12", "4") << endl;    // 48
    cout << s.multiply("123", "456") << endl; // 56088
    return 0;
}

//          1   2   3
//        ___________
//   x    | 4 | 5 | 6
//        |---|---|---
//       | 6 |12 |18  |  <-- Partial results
//       | 5 |10 |15  |
//       | 4 | 8 |12  |
// ____________________

