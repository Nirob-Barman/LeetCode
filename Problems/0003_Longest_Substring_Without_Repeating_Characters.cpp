#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int hash[256] = {0};
        int maxLen = 0;
        int start = 0; // starting index of the substring
        int end = 0;   // ending index of the substring
        while (end < s.size() && start < s.size())
        {
            // if the character is not present in the hash
            if (hash[s[end]] == 0)
            {
                hash[s[end]] = 1;
                end++;
                maxLen = max(maxLen, end - start);
            }
            else
            {
                hash[s[start]] = 0;
                start++;
            }
        }
        return maxLen;
    }
};

int main()
{
    string s = "abcabcbb";
    Solution obj;
    cout << obj.lengthOfLongestSubstring(s) << endl;        // 3
    cout << obj.lengthOfLongestSubstring("bbbbb") << endl;  // 1
    cout << obj.lengthOfLongestSubstring("pwwkew") << endl; // 3
    return 0;
}