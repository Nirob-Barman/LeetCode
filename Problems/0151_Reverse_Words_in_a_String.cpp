#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        reverse(s.begin(), s.end());

        string ans = "";

        stringstream ss(s);
        string word;

        while (ss >> word)
        {
            reverse(word.begin(), word.end());
            ans += word + " ";
        }

        while (ans.back() == ' ')
        {
            ans.pop_back();
        }

        return ans;
    }
};

int main()
{
    Solution obj;
    string s = "the sky is blue";
    cout << obj.reverseWords(s) << endl;
    return 0;
}