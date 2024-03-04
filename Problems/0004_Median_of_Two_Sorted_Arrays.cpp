#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int n = nums1.size();
        int m = nums2.size();

        int i = 0, j = 0;

        vector<int> v;

        while (i < n && j < m)
        {
            if (nums1[i] < nums2[j])
                v.push_back(nums1[i++]);
            else
                v.push_back(nums2[j++]);
        }

        while (i < n)
            v.push_back(nums1[i++]);

        while (j < m)
            v.push_back(nums2[j++]);

        // for (int i = 0; i < v.size(); i++)
        //     cout << v[i] << " ";
        // cout << endl;

        if (v.size() % 2 == 0)
            return (v[v.size() / 2] + v[v.size() / 2 - 1]) / 2.0;

        return v[v.size() / 2];
    }
};

int main()
{
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    Solution s;
    cout << s.findMedianSortedArrays(nums1, nums2) << endl;
    return 0;
}