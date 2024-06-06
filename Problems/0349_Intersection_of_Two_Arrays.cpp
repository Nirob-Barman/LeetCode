#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        // sort(nums1.begin(), nums1.end());
        // sort(nums2.begin(), nums2.end());
        // unordered_set<int> s;
        // vector<int> ans;

        // int i = 0, j = 0;
        // while (i < nums1.size() && j < nums2.size())
        // {
        //     if (nums1[i] == nums2[j])
        //     {
        //         s.insert(nums1[i]);
        //         i++;
        //         j++;
        //     }
        //     else if (nums1[i] < nums2[j])
        //     {
        //         i++;
        //     }
        //     else
        //     {
        //         j++;
        //     }
        // }

        // for (auto x : s)
        // {
        //     ans.push_back(x);
        // }

        // vector<int> ans;
        // unordered_set<int> s;
        // for (int i = 0; i < nums1.size(); i++)
        // {
        //     s.insert(nums1[i]);
        // }
        // unordered_set<int> ss;

        // for (int i = 0; i < nums2.size(); i++)
        // {
        //     if (s.find(nums2[i]) != s.end())
        //     {
        //         ss.insert(nums2[i]);
        //     }
        // }

        // for (auto x : ss)
        // {
        //     ans.push_back(x);
        // }

        // vector<int> ans;
        // int hash[1001] = {0};

        // for (int i = 0; i < nums1.size(); i++){
        //     hash[nums1[i]] = 1;
        // }
        // for (int i = 0; i < nums2.size(); i++){
        //     if (hash[nums2[i]] == 1){
        //         ans.push_back(nums2[i]);
        //         hash[nums2[i]] = 0;
        //     }
        // }

        vector<int> ans;
        unordered_map<int, int> freq;
        for (int i = 0; i < nums1.size(); i++)
        {
            freq[nums1[i]] = 1;
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            if (freq[nums2[i]] == 1)
            {
                ans.push_back(nums2[i]);
                freq[nums2[i]] = 0;
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    Solution s;
    vector<int> ans = s.intersection(nums1, nums2);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}