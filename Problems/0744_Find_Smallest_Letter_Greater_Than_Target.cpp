#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        for (auto character : letters)
        {
            if (character > target)
            {
                return character;
            }
        }

        return letters[0];
    }
};

int main()
{
    vector<char> letters = {'c', 'f', 'j'};
    cout << Solution().nextGreatestLetter(letters, 'a') << endl; // c
    cout << Solution().nextGreatestLetter(letters, 'c') << endl; // f
    cout << Solution().nextGreatestLetter(letters, 'f') << endl; // j
    cout << Solution().nextGreatestLetter(letters, 'j') << endl; // c
    cout << Solution().nextGreatestLetter(letters, 'k') << endl; // c
    return 0;
}