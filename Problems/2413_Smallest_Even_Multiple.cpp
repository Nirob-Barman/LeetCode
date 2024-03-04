#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int smallestEvenMultiple(int n)
    {
        // return (2 * n) / __gcd(2, n);
        // return (2 * n) / gcd(2, n);

        if (n % 2 == 0)
            return n;
        return 2 * n;
    }

    int gcd(int a, int b)
    {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
};

int main()
{
    Solution s;
    cout << s.smallestEvenMultiple(4) << endl;
    cout << s.smallestEvenMultiple(5) << endl;
    cout << s.smallestEvenMultiple(6) << endl;
    return 0;
}