#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int scoreOfString(string s)
    {
        int score = 0;

        for (int i = 0; i < s.size()-1; i++)
        {
            score += abs(((s[i] - 'a') - (s[i + 1] - 'a')));
        }

        return score;
    }
};

int main()
{
    Solution s;
    cout << s.scoreOfString("hello") << endl; // 13
    cout << s.scoreOfString("zaz") << endl;   // 50
    return 0;
}