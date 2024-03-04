#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string getPermutation(int n, int k)
    {
        string result;

        for (int i = 1; i <= n; i++)
        {
            // result += to_string(i);
            result.push_back(i + '0');
            // cout << result << endl;
        }

        for (int i = 1; i < k; i++)
        {
            // cout << result << endl;
            next_permutation(result.begin(), result.end());
        }

        return result;
    }
};

int main()
{
    Solution s;
    cout << s.getPermutation(3, 3);
    return 0;
}