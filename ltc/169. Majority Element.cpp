
// You can use the boyer moore algorithm for solving this problem, but this was the first solution that got into my head.
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;
        int n = nums.size();
        int ans = 0;
        for(int i = 0; i < n; ++i)
            mp[nums[i]]++;

        int mx = 0;
        for(int i = 0; i < n; ++i)
        {
                if(mx < mp[nums[i]])
                {
                    mx = mp[nums[i]];
                    ans = nums[i];
                }
        }

        return ans;
    }
};
