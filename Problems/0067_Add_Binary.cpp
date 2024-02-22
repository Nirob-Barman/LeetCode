#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string addBinary(string a, string b)
    {
        int i = a.size() - 1;
        int j = b.size() - 1;

        int carry = 0;
        string ans = "";

        while (i >= 0 || j >= 0 || carry)
        {
            if (i >= 0)
            {
                carry += a[i] - '0';
                i--;
            }

            if (j >= 0)
            {
                carry += b[j] - '0';
                j--;
            }

            // ans = to_string(carry % 2) + ans;
            ans = char(carry % 2 + '0') + ans;
            cout << ans << endl;

            carry /= 2;
        }

        return ans;
    }
};

int main()
{
    string a("11"), b("1");

    Solution s;
    string ans = s.addBinary(a, b);
    cout << ans << endl;
    cout << s.addBinary("1010", "1011") << endl;
    cout << s.addBinary("1111", "1111") << endl;

    return 0;
}