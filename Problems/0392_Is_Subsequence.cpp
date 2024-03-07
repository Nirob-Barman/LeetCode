#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        if (s.size() == 0)
            return true;
        if ((s.size() > t.size()))
            return false;
        int i = 0, j = 0;

        while (i < s.size() && j < t.size())
        {
            if (s[i] == t[j])
            {
                i++;
                if (i == s.size())
                {

                    return true;
                }
            }
            j++;
        }

        return false;
    }
};

int main()
{
    Solution s;
    cout << s.isSubsequence("abc", "ahbgdc") << endl;
    cout << s.isSubsequence("axc", "ahbgdc") << endl;
    return 0;
}