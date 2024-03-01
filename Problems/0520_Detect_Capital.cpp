#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool detectCapitalUse(string word)
    {
        int numberOfCapitals = 0;
        for (int i = 0; i < word.size(); i++)
        {
            // if (isupper(word[i]))
            if (word[i] >= 'A' && word[i] <= 'Z')
            {
                numberOfCapitals++;
            }
        }

        // return numberOfCapitals == 0 || numberOfCapitals == word.size() || (numberOfCapitals == 1 && word[0] >= 'A' && word[0] <= 'Z');
        return numberOfCapitals == 0 || numberOfCapitals == word.size() || (numberOfCapitals == 1 && isupper(word[0]));
    }
};

int main()
{
    Solution s;
    cout << s.detectCapitalUse("USA") << endl;
    cout << s.detectCapitalUse("leetcode") << endl;
    cout << s.detectCapitalUse("Google") << endl;
    cout << s.detectCapitalUse("FlaG") << endl;
    return 0;
}