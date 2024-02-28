#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int addDigits(int num)
    {
        // if (num < 10)
        // {
        //     return num;
        // }

        // int sum = 0;
        // while (num > 0)
        // {
        //     sum += num % 10;
        //     num /= 10;
        // }

        // return addDigits(sum);

        if (num == 0)
        {
            return 0;
        }
        else if (num % 9 == 0)
        {
            return 9;
        }
        else
        {
            return num % 9;
        }
    }
};

int main()
{
    Solution s;
    cout << s.addDigits(38) << endl;
    cout << s.addDigits(3) << endl;
    return 0;
}