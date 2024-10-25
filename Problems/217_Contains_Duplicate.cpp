#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> hashTable;
        for (int num : nums)
        {
            if (hashTable[num] == 1)
            {
                return true;
            }
            hashTable[num]++;
        }
        return false;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3, 1};
    cout << s.containsDuplicate(nums) << endl; // true
    nums = {1, 2, 3, 4};
    cout << s.containsDuplicate(nums) << endl; // false
    nums = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    cout << s.containsDuplicate(nums) << endl; // true
    return 0;
}