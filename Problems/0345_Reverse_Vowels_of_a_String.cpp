#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isVowel(char c)
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }

    string reverseVowels(string s)
    {
        int left = 0;
        int right = s.size() - 1;

        while (left < right)
        {
            // move the left pointer until it meets a vowel
            while (left < right && isVowel(s[left]) == false)
            {
                left++;
            }
            // move the right pointer until it meets a vowel
            while (left < right && isVowel(s[right]) == false)
            {
                right--;
            }

            // swap the two vowels if left < right
            if (left >= right)
            {
                break;
            }

            swap(s[left], s[right]);
            // move both pointers after swapping
            left++;
            right--;
        }

        return s;
    }
};

int main()
{
    Solution s;
    cout << s.reverseVowels("hello") << endl;    // holle
    cout << s.reverseVowels("leetcode") << endl; // leotcede
    return 0;
}