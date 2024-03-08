#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int tribonacci(int n)
    {
        // naive recursive solution: O(3^n) || TLE
        // if (n == 0)
        //     return 0;
        // if (n == 1 || n == 2)
        //     return 1;

        // return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);

        // Bottom Up DP solution: O(n)
        // Tabulaization
        // int TribonacciNumbers[38];
        // TribonacciNumbers[0] = 0;
        // TribonacciNumbers[1] = TribonacciNumbers[2] = 1;

        // for (int i = 3; i <= n; i++)
        // {
        //     TribonacciNumbers[i] = TribonacciNumbers[i - 1] + TribonacciNumbers[i - 2] + TribonacciNumbers[i - 3];
        // }

        // return TribonacciNumbers[n];

        // Memoization
        vector<int> memo(n + 1, -1);
        return memoization(n, memo);
    }

    int memoization(int n, vector<int> &memo)
    {
        if (n < 2)
            return n;
        if (n == 2)
            return 1;

        if (memo[n] != -1)
        {
            return memo[n];
        }

        return memo[n] = memoization(n - 1, memo) + memoization(n - 2, memo) + memoization(n - 3, memo);
    }
};

int main()
{
    Solution s;
    cout << s.tribonacci(0) << endl;  // 0
    cout << s.tribonacci(1) << endl;  // 1
    cout << s.tribonacci(2) << endl;  // 1
    cout << s.tribonacci(3) << endl;  // 2
    cout << s.tribonacci(4) << endl;  // 4
    cout << s.tribonacci(25) << endl; // 1389537
    return 0;
}