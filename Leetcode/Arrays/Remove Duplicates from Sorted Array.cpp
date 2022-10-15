#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int n = nums.size();
        set<int> os;
        for (int i = 0; i < n; i++)
        {
            os.insert(nums[i]);
        }
        nums.clear();
        for (int ele : os)
        {
            nums.push_back(ele);
        }

        return nums.size();
    }
};