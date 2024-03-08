#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        int max = *max_element(candies.begin(), candies.end());

        vector<bool> result;

        for (int i = 0; i < candies.size(); i++)
        {
            if (candies[i] + extraCandies >= max)
            {
                result.push_back(true);
            }
            else
            {
                result.push_back(false);
            }
        }

        return result;
    }
};

int main()
{
    vector<int> v = {2, 3, 5, 1, 3};
    int extraCandies = 3;
    Solution s;
    vector<bool> result = s.kidsWithCandies(v, extraCandies);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " "; // [true, true, true, false, true]
    }
    cout << endl;
    return 0;
}