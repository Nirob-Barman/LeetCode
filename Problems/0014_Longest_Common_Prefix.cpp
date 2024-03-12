#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs[strs.size() - 1];
        string ans = "";

        // for (int i = 0; i < first.size(); i++)
        for (int i = 0; i < min(first.size(), last.size()); i++)
        {
            if (first[i] == last[i])
                ans += first[i];
            else
                break;
        }

        return ans;
    }
};

int main()
{
    vector<string> strs = {"flower", "flow", "flight"};
    cout << Solution().longestCommonPrefix(strs) << endl;

    strs = {"dog", "racecar", "car"};
    cout << Solution().longestCommonPrefix(strs) << endl;
    return 0;
}