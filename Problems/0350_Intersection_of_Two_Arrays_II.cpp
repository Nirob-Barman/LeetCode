#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        // sort(nums1.begin(), nums1.end());
        // sort(nums2.begin(), nums2.end());
        // int i = 0, j = 0;
        // vector<int> ans;
        
        // while(i < nums1.size() && j < nums2.size()){
        //     if(nums1[i] == nums2[j]){
        //         ans.push_back(nums1[i]);
        //         i++;
        //         j++;
        //     }
        //     else if(nums1[i] < nums2[j]){
        //         i++;
        //     }
        //     else{
        //         j++;
        //     }
        // }

        // vector<int> ans;
        // unordered_map<int, int> frequency;

        // for (int i = 0; i < nums1.size(); i++){
        //     frequency[nums1[i]]++;
        // }

        // for (int i = 0; i < nums2.size(); i++){
        //     if (frequency[nums2[i]] > 0){
        //         ans.push_back(nums2[i]);
        //         frequency[nums2[i]]--;
        //     }
        // }

        int hash[1001] = {0};
        vector<int> ans;

        for (int i = 0; i < nums1.size(); i++)
        {
            hash[nums1[i]]++;
        }

        for (int i = 0; i < nums2.size(); i++){
            if (hash[nums2[i]] > 0)
            {
                ans.push_back(nums2[i]);
                hash[nums2[i]]--;
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
    vector<int> ans = s.intersect(nums1, nums2);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " "; // 2 2
    }
    return 0;
}