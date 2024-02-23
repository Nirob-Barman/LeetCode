#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int mySqrt(int x)
    {
        if (x == 0 || x == 1)
            return x;

        int left = 1;
        int right = x;

        long long int mid;
        while (left <= right)
        {
            // mid = (left + right) / 2;
            mid = left + (right - left) / 2;
            // if (mid * mid == x)
                if (mid == x / mid)
                return mid;
            // else if (x > mid * mid)
                // else if(mid * mid < x)
                else if (mid < x / mid)
                left = mid + 1;
            else
                right = mid - 1;
        }
        // cout << right << endl;
        return right;
    }
};

int main()
{
    Solution s;
    cout << s.mySqrt(8) << endl;
    cout << s.mySqrt(4) << endl;
    return 0;
}