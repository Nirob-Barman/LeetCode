#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        int count = 0;

        // for (int i = 0; i < stones.size(); i++)
        // {
        //     for (int j = 0; j < jewels.size(); j++)
        //     {
        //         if (stones[i] == jewels[j])
        //         {
        //             count++;
        //         }
        //     }
        // }

        unordered_map<char, int> hashTable;
        for (int i = 0; i < stones.size(); i++)
        {
            hashTable[stones[i]]++;
        }

        for (int i = 0; i < jewels.size(); i++)
        {
            count += hashTable[jewels[i]];
        }

        return count;
    }
};

int main()
{
    Solution obj;
    string jewels = "aA", stones = "aAAbbbb";
    cout << obj.numJewelsInStones(jewels, stones) << endl; // 3
    jewels = "z", stones = "ZZ";
    cout << obj.numJewelsInStones(jewels, stones) << endl; // 0
    return 0;
}