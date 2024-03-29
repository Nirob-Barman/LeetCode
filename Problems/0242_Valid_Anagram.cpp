#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;
    }
};

int main()
{
    Solution s;
    cout << s.isAnagram("anagram", "nagaram") << endl; // true
    cout << s.isAnagram("rat", "car") << endl;          // false
    cout << s.isAnagram("", "") << endl;
    cout << s.isAnagram("a", "ab") << endl;
    return 0;
}