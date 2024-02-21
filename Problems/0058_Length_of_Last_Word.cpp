#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int lengthCount = 0;
        int right = s.size() - 1;
        
        while (s[right] == ' ')
        {
            right--;
        }

        for(int i = right; i >= 0; i--)
        {
            if(s[i] != ' ')
            {
                lengthCount++;
            }
            else
            {
                break;
            }
        }
        cout << lengthCount << endl;
        return lengthCount;
    }
};

int main()
{
    Solution s;
    // int length = s.lengthOfLastWord("Hello World");
    // int length = s.lengthOfLastWord("Helloworld");
    int length = s.lengthOfLastWord("Hello World ");
    cout << length << endl;
    return 0;
}