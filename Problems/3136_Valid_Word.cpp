#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isValid(string word)
    {
        int num = 0;
        int vowels = 0;
        int consonants = 0;
        if (word.size() < 3)
        {
            return false;
        }
        for (int i = 0; i < word.size(); i++)
        {
            char c = word[i];
            if (c >= '0' && c <= '9')
            {
                num++;
            }

            if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
            {
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
                {
                    vowels++;
                }
                else
                {
                    consonants++;
                }
            }
        }
        
        if(num + consonants + vowels == word.size() && consonants > 0 && vowels > 0){
            return true;
        }

        return false;
    }
};

int main()
{
    Solution s;
    cout << s.isValid("234Adas") << endl;
    cout << s.isValid("b3") << endl;
    cout << s.isValid("a3$e") << endl;
    return 0;
}