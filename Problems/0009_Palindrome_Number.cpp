#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        if (x == 0)
            return true;
        if (x % 10 == 0)
            return false;
        // cout << x << endl;

        long long temp = x;
        long long rev = 0;
        while (temp != 0)
        {
            rev = temp % 10 + rev * 10;
            temp = temp / 10;
        }
        cout << x << " " << rev << endl;
        if (x == rev)
            return true;
        return false;
    }
};

int main()
{
    Solution s;
    bool isPalindrome = s.isPalindrome(121);
    // bool isPalindrome = s.isPalindrome(1210);
    // bool isPalindrome = s.isPalindrome(-121);
    if (isPalindrome)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}