#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isHappy(int n)
    {
        int slow = n, fast = n;
        do
        {
            slow = sumOfSqueres(slow);
            // cout << slow << endl;
            fast = sumOfSqueres(sumOfSqueres(fast));
            // cout << fast << endl;
        } while (slow != fast);
        return slow == 1;
    }

    int sumOfSqueres(int n)
    {
        int sum = 0;
        while (n)
        {
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        return sum;
    }
};

int main()
{
    Solution s;
    cout << s.isHappy(19) << endl; // true
    cout << s.isHappy(2) << endl;  // false
    return 0;
}