#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string replaceWords(vector<string> &dictionary, string sentence)
    {
        unordered_set<string> s(dictionary.begin(), dictionary.end());
        string ans = "";
        int i = 0;

        while (i < sentence.size())
        {
            string word = "";
            bool skip = false;

            while (i < sentence.size() && sentence[i] != ' ')
            {
                if (skip)
                {
                    i++;
                    continue;
                }
                word += sentence[i];
                i++;

                if (s.find(word) != s.end())
                {
                    skip = true;
                }
            }

            ans += word;

            if (i < sentence.size() && sentence[i] == ' ')
                ans += ' ';

            i++;
        }

        return ans;
    }
};

int main()
{
    vector<string> dictionary = {"cat", "bat", "rat"};
    string sentence = "the cattle was rattled by the battery";
    
    Solution s;
    cout << s.replaceWords(dictionary, sentence) << endl; // the cat was rat by the bat
    return 0;
}