#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int countSegments(string s)
    {
        int cnt = 0;

        // for (int i = 0; i < s.size(); i++)
        // {
        //     if (s[i] != ' ' && (i == 0 || s[i - 1] == ' '))
        //     {
        //         cnt++;
        //     }
        // }

        stringstream ss(s);

        string word;

        while (ss >> word)
        {
            // cout << word << endl;
            cnt++;
        }

        return cnt;
    }
};

int main()
{
    Solution s;
    cout << s.countSegments("Hello, my name is John") << endl;
    cout << s.countSegments("Hello") << endl;
    return 0;
}