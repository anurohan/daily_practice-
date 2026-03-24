#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> mp;
    for(int i=0;i<nums.size();i++){
        int diff = target - nums[i];
        if(mp.count(diff)) return {mp[diff], i};
        mp[nums[i]] = i;
    }
    return {};
}

int main() {
    vector<int> nums = {2,7,11,15};
    int target = 9;

    vector<int> ans = twoSum(nums, target);

    for(int x : ans) cout << x << " ";
}