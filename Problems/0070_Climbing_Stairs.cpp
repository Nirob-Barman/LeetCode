#include <bits/stdc++.h>

using namespace std;

int memo[50] = {0};

class Solution
{
public:
    int climbStairs(int n)
    {
        if (n <= 2)
            return n;

        if (memo[n] != 0)
            return memo[n];

        return memo[n] = climbStairs(n - 1) + climbStairs(n - 2);
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
