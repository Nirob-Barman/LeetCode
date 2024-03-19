#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int buy = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] < buy)
            {
                buy = prices[i];
            }
            else if (prices[i] - buy > maxProfit)
            {
                maxProfit = prices[i] - buy;
            }
        }

        return maxProfit;
    }
};

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << Solution().maxProfit(prices) << endl;
    return 0;
}