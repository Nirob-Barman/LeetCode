#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string maximumOddBinaryNumber(string s)
    {
        // int numOfOnes = s.count(s.begin(), s.end(), '1');
        // int numOfOnes = countOnes(s);
        // int numOfZeros = s.size() - numOfOnes;

        // // Hints: return "1" * (numOfOnes - 1) + "0" * numOfZeros + "1";
        // // return string(numOfOnes - 1, '1') + string(numOfZeros, '0') + string(1, '1');
        // return string(numOfOnes - 1, '1') + string(numOfZeros, '0') + "1";

        // cout << s << endl;
        sort(s.rbegin(), s.rend());
        // cout << s << endl;
        for (int i = s.size() - 2; i >= 0; i--)
        {
            // cout << s[i] << " " << s[s.size() - 1] << endl;
            if (s[i] == '1')
                swap(s[i], s[s.size() - 1]);
            // cout << s << endl;
        }

        return s;
    }

    int countOnes(string s)
    {
        int numOfOnes = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                numOfOnes++;
        }

        return numOfOnes;
    }
};

int main()
{
    Solution s;
    cout << s.maximumOddBinaryNumber("1010") << endl;  // "1001"
    cout << s.maximumOddBinaryNumber("1111") << endl;  // "1111"
    cout << s.maximumOddBinaryNumber("11011") << endl; // "11101"
    cout << s.maximumOddBinaryNumber("01111") << endl; // "01111"
    return 0;
}