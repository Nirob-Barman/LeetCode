#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int kthFactor(int n, int k)
    {
        vector<int> factors;

        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                if (i == n / i)
                {
                    // if the number is a perfect square
                    // push only a factor
                    factors.push_back(i);
                }
                else
                {
                    factors.push_back(i);
                    factors.push_back(n / i);
                }
            }
        }

        sort(factors.begin(), factors.end());

        if (k > factors.size())
        {
            return -1;
        }

        return factors[k - 1];
    }
};

int main()
{
    Solution s;
    cout << s.kthFactor(12, 3) << endl;
    cout << s.kthFactor(7, 2) << endl;
    return 0;
}