#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string convertToTitle(int columnNumber)
    {
        string ans = "";

        while (columnNumber > 0)
        {
            columnNumber--;
            // cout << columnNumber << endl;
            ans = char(columnNumber % 26 + 'A') + ans;
            // cout << ans << endl;
            columnNumber /= 26;
        }

        return ans;
    }
};

int main()
{
    Solution s;
    cout << s.convertToTitle(1) << endl;
    cout << s.convertToTitle(26) << endl;
    cout << s.convertToTitle(28) << endl;
    cout << s.convertToTitle(52) << endl;
    cout << s.convertToTitle(701) << endl;
    return 0;
}

// Calculate the remainder of (701 - 1) % 26, resulting in 24.
// The character corresponding to the remainder is 'A' + 24, which is 'Y'. Append 'Y' to the result.
// Update columnNumber to (701 - 1) / 26, becoming 26.
// Calculate the remainder of (26 - 1) % 26, resulting in 25. The character is 'A' + 25, which is 'Z'. Append 'Z' to the result. The final result is "ZY".