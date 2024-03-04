#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int commonFactors(int a, int b)
    {
        // int ans = 0;

        // // for (int i = 1; i <= min(a, b); i++)
        // for (int i = 1; i <= (a > b ? b : a); i++)
        // {
        //     if (a % i == 0 && b % i == 0)
        //         ans++;
        // }

        // return ans;

        int gcdValue = __gcd(a, b);

        int ans = 0;

        for (int i = 1; i * i <= gcdValue; i++)
        {
            if (gcdValue % i == 0)
            {
                if (gcdValue / i == i)
                    ans++; // i is a perfect square number
                else
                    ans += 2; // i is not a perfect square number
            }
        }

        return ans;
    }
};

int main()
{
    Solution s;
    cout << s.commonFactors(12, 6) << endl;
    cout << s.commonFactors(25, 30) << endl;
    cout << s.commonFactors(7, 5) << endl;
    return 0;
}