#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isUgly(int n)
    {
        if (n == 0)
            return 0;
        while (n % 2 == 0)
            n = n / 2;
        while (n % 3 == 0)
            n = n / 3;
        while (n % 5 == 0)
            n = n / 5;
        return n == 1;
    }
};

int main()
{
    Solution s;
    cout << s.isUgly(1) << endl;
    cout << s.isUgly(6) << endl;
    cout << s.isUgly(8) << endl;
    cout << s.isUgly(14) << endl;
    return 0;
}