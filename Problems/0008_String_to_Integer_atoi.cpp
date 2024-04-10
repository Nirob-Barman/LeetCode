#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int myAtoi(string s)
    {
        int len = s.size();
        double num = 0;

        int i = 0;

        while (i < len && s[i] == ' ')
        {
            i++;
        }

        bool positive = s[i] == '+';
        bool negative = s[i] == '-';

        if (positive || negative)
        {
            i++;
        }

        for (; i < len; i++)
        {
            if (s[i] < '0' || s[i] > '9')
            {
                // if it is not a number
                break;
            }

            num = num * 10 + (s[i] - '0');
        }

        if (negative)
        {
            num *= -1;
        }

        if (num > INT_MAX)
        {
            return INT_MAX;
        }

        if (num < INT_MIN)
        {
            return INT_MIN;
        }

        return int(num);
    }
};

int main()
{
    Solution s;
    cout << s.myAtoi("42") << endl;
    cout << s.myAtoi("   -42") << endl;
    cout << s.myAtoi("4193 with words") << endl;
    return 0;
}