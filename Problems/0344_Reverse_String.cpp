#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int strLength = s.size();
        for (int i = 0; i < strLength / 2; i++)
        {
            swap(s[i], s[strLength - i - 1]);
        }
    }
};

int main()
{
    // vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    vector<char> s = {'h', 'a', 'n', 'n', 'a', 'h'};
    Solution sol;
    sol.reverseString(s);
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;
    return 0;
}