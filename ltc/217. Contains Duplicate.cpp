class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        map<long, long> mp;
        int n = nums.size();

        for(int i = 0; i < n; ++i) mp[nums[i]]++;

        bool flag = false;

        for(int i = 0; i < n; ++i) if(mp[nums[i]] >= 2) {flag = true; break;}

        return flag;
    }
};
