#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<char, int> mp;

        for (int i = 0; i < magazine.size(); i++)
        {
            mp[magazine[i]]++;
        }

        for (int i = 0; i < ransomNote.size(); i++)
        {
            if (mp[ransomNote[i]] == 0)
            {
                return false;
            }
            else
            {
                mp[ransomNote[i]]--;
            }
        }

        return true;
    }
};

int main()
{
    Solution s;

    string ransomNote = "a";
    string magazine = "b";

    cout << s.canConstruct(ransomNote, magazine) << endl; // false
    cout << s.canConstruct("aa", "ab") << endl;           // false
    cout << s.canConstruct("aa", "aab") << endl;          // true
    return 0;
}