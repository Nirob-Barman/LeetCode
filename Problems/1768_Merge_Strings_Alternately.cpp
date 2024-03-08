#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        int m = word1.size() - 1;
        int n = word2.size() - 1;
        int i = 0;
        int j = 0;
        string ans = "";

        // while (i <= m && j <= n)
        // {
        //     ans += word1[i];
        //     ans += word2[j];
        //     i++;
        //     j++;
        // }

        // while (i <= m)
        // {
        //     ans += word1[i];
        //     i++;
        // }

        // while (j <= n)
        // {
        //     ans += word2[j];
        //     j++;
        // }

        while (i <= m || j <= n)
        {
            if (i <= m)
            {
                ans += word1[i];
                i++;
            }

            if (j <= n)
            {
                ans += word2[j];
                j++;
            }
        }

        return ans;
    }
};

int main()
{
    string word1 = "abcd";
    string word2 = "pq";

    Solution s;
    cout << s.mergeAlternately(word1, word2) << endl;
    cout << s.mergeAlternately("ab", "pqrs") << endl;
    cout << s.mergeAlternately("ab", "pqrs") << endl;
    return 0;
}