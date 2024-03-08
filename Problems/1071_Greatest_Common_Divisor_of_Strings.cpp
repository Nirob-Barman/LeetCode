#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        if (str1 + str2 != str2 + str1)
            return "";

        return str1.substr(0, __gcd(str1.size(), str2.size()));
    }
};

int main()
{
    Solution s;
    cout << s.gcdOfStrings("ABCABC", "ABC") << endl;  // ABC
    cout << s.gcdOfStrings("ABABAB", "ABAB") << endl; // AB
    cout << s.gcdOfStrings("LEET", "CODE") << endl;   // ""
    return 0;
}