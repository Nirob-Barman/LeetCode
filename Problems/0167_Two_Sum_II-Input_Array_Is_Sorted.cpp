#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int left = 0;
        int right = numbers.size() - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (numbers[left] + numbers[right] == target)
            {
                return {left + 1, right + 1};
            }
            else if (numbers[left] + numbers[right] > target)
            {
                right--;
            }
            else
            {
                left++;
            }
        }

        return {-1, -1};
    }
};

int main()
{
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;
    cout << Solution().twoSum(numbers, target)[0] << " " << Solution().twoSum(numbers, target)[1] << endl; // 1 2
    numbers = {2, 3, 4};
    target = 6;
    cout << Solution().twoSum(numbers, target)[0] << " " << Solution().twoSum(numbers, target)[1] << endl; // 1 3
    return 0;
}