#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> sortArray(vector<int> &nums)
    {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }

    void mergeSort(vector<int> &nums, int left, int right)
    {

        if (left < right)
        {
            int mid = (left + right) / 2;

            mergeSort(nums, left, mid);
            mergeSort(nums, mid + 1, right);

            merge(nums, left, mid, right);
        }
    }

    void merge(vector<int> &nums, int left, int mid, int right)
    {
        int leftSize = mid - left + 1;
        int rightSize = right - mid;

        vector<int> leftArray(leftSize);
        vector<int> rightArray(rightSize);

        for (int i = 0; i < leftSize; i++)
        {
            leftArray[i] = nums[left + i];
        }

        for (int i = 0; i < rightSize; i++)
        {
            rightArray[i] = nums[mid + 1 + i];
        }

        int leftIndex = 0;
        int rightIndex = 0;
        int mainIndex = left;

        while (leftIndex < leftSize && rightIndex < rightSize)
        {
            if (leftArray[leftIndex] < rightArray[rightIndex])
            {
                nums[mainIndex++] = leftArray[leftIndex++];
            }
            else
            {
                nums[mainIndex++] = rightArray[rightIndex++];
            }
        }

        while (leftIndex < leftSize)
        {
            nums[mainIndex++] = leftArray[leftIndex++];
        }

        while (rightIndex < rightSize)
        {
            nums[mainIndex++] = rightArray[rightIndex++];
        }
    }
};

int main()
{
    Solution s;
    vector<int> nums = {5, 2, 3, 1};
    s.sortArray(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " "; // 1 2 3 5
    }
    cout << endl;
    nums = {5, 1, 1, 2, 0, 0};
    s.sortArray(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " "; // 0 0 1 1 2 5
    }
    return 0;
}