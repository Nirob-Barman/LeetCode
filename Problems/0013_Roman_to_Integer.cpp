#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        // unordered_map<char, int> roman = {
        //     {'I', 1},
        //     {'V', 5},
        //     {'X', 10},
        //     {'L', 50},
        //     {'C', 100},
        //     {'D', 500},
        //     {'M', 1000}};
        unordered_map<char, int> roman;
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;

        int romanToInteger = 0;

        for (int i = 0; i < s.size(); i++)
        {
            // if (i + 1 < s.size() && roman[s[i]] < roman[s[i + 1]])
            if (roman[s[i]] < roman[s[i + 1]])
            {
                romanToInteger -= roman[s[i]];
            }
            else
            {
                romanToInteger += roman[s[i]];
            }
        }

        return romanToInteger;
    }
};

int main()
{
    Solution s;
    // int integerNumber = s.romanToInt("III");
    // int integerNumber = s.romanToInt("LVIII");
    // int integerNumber = s.romanToInt("MCMXCIV");
    int integerNumber = s.romanToInt("IV");
    cout << integerNumber << endl;
    return 0;
}