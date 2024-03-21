#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int findMinimumOperations(string s1, string s2, string s3)
    {
        int len1 = s1.size();
        int len2 = s2.size();
        int len3 = s3.size();

        // int minLength = min(len1, min(len2, len3));
        int minLength = min({len1, len2, len3});

        int i = 0;

        while (i < minLength)
        {
            if (s1[i] == s2[i] && s2[i] == s3[i])
            {
                i++;
            }
            else
            {
                break;
            }
        }

        if (i == 0)
            return -1;
        else
            return len1 + len2 + len3 - 3 * i;
    }
};

int main()
{
    string s1, s2, s3;
    s1 = "abc";
    s2 = "ade";
    s3 = "aaa";
    cout << Solution().findMinimumOperations(s1, s2, s3) << endl; // 6
    s1 = "abc";
    s2 = "abb";
    s3 = "ab";
    cout << Solution().findMinimumOperations(s1, s2, s3) << endl; // 2
    return 0;
}