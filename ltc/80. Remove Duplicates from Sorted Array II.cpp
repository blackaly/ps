class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        int r = 0, l = 0;

        while(r < n)
        {
            int cnt = 1;
            while(r + 1 < n && nums[r] == nums[r + 1])
            {
                r++;
                cnt++;
            }

            for(int i = 0; i < min(2, cnt); ++i)
            {
                nums[l] = nums[r];
                l++;
            }
            r++;

            }
            return l;
    }
};
