#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stringStack;

        for (char c : s)
        {
            if (c == '(' || c == '{' || c == '[')
            {
                stringStack.push(c);
            }
            else
            {
                if (stringStack.empty())
                {
                    return false;
                }
                else
                {
                    if (c == ')' && stringStack.top() == '(')
                    {
                        stringStack.pop();
                    }
                    else if (c == '}' && stringStack.top() == '{')
                    {
                        stringStack.pop();
                    }
                    else if (c == ']' && stringStack.top() == '[')
                    {
                        stringStack.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
        return stringStack.empty();
    }
};

int main()
{
    Solution s;
    // cout << s.isValid("()[]{}") << endl; // true
    // cout << s.isValid("([)]") << endl; // false
    // cout<<s.isValid("(){[]}")<<endl; // true
    cout << s.isValid("]") << endl; // false
    return 0;
}