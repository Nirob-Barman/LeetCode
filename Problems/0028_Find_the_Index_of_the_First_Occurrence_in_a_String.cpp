#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        // return haystack.find(needle);

        int n = haystack.size();
        int m = needle.size();
        for (int i = 0; i < n - m + 1; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (haystack[i + j] != needle[j])
                    break;

                if (j == m - 1)
                    return i;
            }
        }

        return -1;
    }
};

int main()
{
    Solution s;
    cout << s.strStr("hello", "lo") << endl;
    return 0;
}