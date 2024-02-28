#include <bits/stdc++.h>

using namespace std;

int memo[50] = {0};

class Solution
{
public:
    int climbStairs(int n)
    {
        // if (n <= 2)
        //     return n;

        // if (memo[n] != 0)
        //     return memo[n];

        // return memo[n] = climbStairs(n - 1) + climbStairs(n - 2);

        vector<int> dp(n + 1, 0);
        dp[0] = 1;
        dp[1] = 1;
        for (int i = 2; i <= n; i++)
            dp[i] = dp[i - 1] + dp[i - 2];
        return dp[n];
    }
};

int main()
{
    Solution s;
    cout << s.climbStairs(0) << endl;
    cout << s.climbStairs(1) << endl;
    cout << s.climbStairs(2) << endl;
    cout << s.climbStairs(3) << endl;
    cout << s.climbStairs(4) << endl;
    return 0;
}

//           climbStairs(2)
//          /             \
// climbStairs(1)    climbStairs(0)
//       \
// climbStairs(0)

//                            climbStairs(3)
//                          /                \
//             climbStairs(2)               climbStairs(1)
//            /            \              /
//  climbStairs(1) climbStairs(0)   climbStairs(0)  climbStairs(-1)

//                            climbStairs(4)
//                          /                \
//             climbStairs(3)               climbStairs(2)
//            /            \              /            \
//  climbStairs(2) climbStairs(1)   climbStairs(1) climbStairs(0)
//  /           \
// climbStairs(1) climbStairs(0)
