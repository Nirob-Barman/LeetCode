#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int calPoints(vector<string> &operations)
    {
        // vector<int> v;
        // for (int i = 0; i < operations.size(); i++)
        // {
        //     if (operations[i] == "C")
        //     {
        //         v.pop_back();
        //     }
        //     else if (operations[i] == "D")
        //     {
        //         v.push_back(v[v.size() - 1] * 2);
        //     }
        //     else if (operations[i] == "+")
        //     {
        //         v.push_back(v[v.size() - 1] + v[v.size() - 2]);
        //     }
        //     else
        //     {
        //         v.push_back(stoi(operations[i]));
        //     }
        // }
        // int sum = 0;
        // for (int i = 0; i < v.size(); i++)
        // {
        //     sum += v[i];
        // }
        // return sum;

        stack<int> st;
        for (int i = 0; i < operations.size(); i++)
        {
            if (operations[i] == "C")
            {
                st.pop();
            }
            else if (operations[i] == "D")
            {
                st.push(2 * st.top());
            }
            else if (operations[i] == "+")
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.push(a);
                st.push(a + b);
            }
            else
            {
                st.push(stoi(operations[i]));
            }
        }

        int sum = 0;
        while (!st.empty())
        {
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};

int main()
{
    vector<string> operations = {"5", "-2", "4", "C", "D", "9", "+", "+"};
    Solution s;
    cout << s.calPoints(operations) << endl; // 27
    return 0;
}