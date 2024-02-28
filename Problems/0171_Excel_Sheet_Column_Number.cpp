#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int titleToNumber(string columnTitle)
    {
        int ans = 0;
        for (int i = 0; i < columnTitle.size(); i++)
        {
            ans = ans * 26 + (columnTitle[i] - 'A' + 1);
        }
        return ans;
    }
};

int main()
{
    Solution s;
    cout << s.titleToNumber("A") << endl;
    cout << s.titleToNumber("AA") << endl;
    cout << s.titleToNumber("AB") << endl;
    cout << s.titleToNumber("ZY") << endl;
    return 0;
}