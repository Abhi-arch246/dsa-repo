#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> umap;
        vector<int> pairs;
        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];
            if (umap.find(complement) != umap.end())
            {
                pairs.push_back(umap.find(complement)->second);
                pairs.push_back(i);
                return pairs;
            }
            umap.insert({nums[i], i});
        }
        return pairs;
    }
};