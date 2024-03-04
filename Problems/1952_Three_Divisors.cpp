#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isThree(int n)
    {
        if (n < 4)
        {
            // number less than 4 can not have three divisors
            return false;
        }

        int count = 2; // for 1 and n

        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                count++;
                if (count > 3)
                {
                    return false;
                }
            }
        }

        return count == 3;
    }
};

int main()
{
    Solution s;
    cout << s.isThree(1) << endl;
    cout << s.isThree(4) << endl;
    cout << s.isThree(6) << endl;
    cout << s.isThree(8) << endl;
    cout << s.isThree(8) << endl;
    return 0;
}