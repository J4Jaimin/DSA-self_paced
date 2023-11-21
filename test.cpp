#include <bits/stdc++.h>
using namespace std;

void topK(vector<int> &nums, int k)
{
    // Code here

    map<int, int> mapp;
    multimap<int, int> mulmap;
    vector<int> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        mapp[nums[i]]++;
    }

    for (auto it : mapp)
    {
        mulmap.insert({it.second, it.first});
    }

    for (auto it = mulmap.rbegin(); it != mulmap.rend(); it++)
    {
        if (k == 0)
            break;

        ans.push_back(it->first);
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> nums;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        nums.push_back(num);
    }

    topK(nums, k);
    return 0;
}