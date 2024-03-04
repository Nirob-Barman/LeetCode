#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int countPrimes(int n)
    {
        if (n <= 1)
        {
            return 0;
        }

        vector<bool> primes(n, true);

        primes[0] = primes[1] = false;

        for (int i = 2; i * i < n; i++)
        {
            if (primes[i])
            {
                for (int j = i * i; j < n; j += i)
                {
                    primes[j] = false;
                }
            }
        }

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (primes[i])
            {
                count++;
            }
        }

        return count;
    }
};

int main()
{
    Solution s;
    cout << s.countPrimes(10) << endl;
    cout << s.countPrimes(0) << endl;
    cout << s.countPrimes(1) << endl;
    return 0;
}