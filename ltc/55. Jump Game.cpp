
// Greedy Solution.

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int pos = nums.size() - 1;
        for(int i = pos - 1; i >= 0; --i)
        {
            if(i + nums[i] >= pos)
                pos = i;
        }

        return pos == 0;
    }
};
