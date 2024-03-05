#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int firstUniqChar(string s)
    {
        for (int i = 0; i < s.size(); i++)
        {
            bool appear_again = false;

            for (int j = 0; j < s.size(); j++)
            {
                if (i != j && s[i] == s[j])
                {
                    appear_again = true;
                    break;
                }
            }

            if (!appear_again)
            {
                // if not appear again that means it is unique
                return i;
            }
        }

        return -1;
    }
};

int main()
{

    return 0;
}