#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int fib(int n)
    {
        // if (n <= 1)
        //     return n;

        // return fib(n - 1) + fib(n - 2);

        vector<int> dp(n + 1, 0);
        dp[0] = 0;
        dp[1] = 1;

        for (int i = 2; i <= n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp[n];
    }
};

int main()
{
    Solution s;
    cout << s.fib(2) << endl;
    cout << s.fib(3) << endl;
    return 0;
}