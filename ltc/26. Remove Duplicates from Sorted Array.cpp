class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> mp;
        int n = nums.size();
        int cnt = 0;
        for(int i = 0; i < n; ++i)
            {
                mp[nums[i]]++;
                if(mp[nums[i]] > 1) continue;
                else
                {
                    nums[cnt++] = nums[i];
                }
            }

        return cnt;
    }
};
