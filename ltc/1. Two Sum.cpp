// With brute force way
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int indx = -1, indx_2 = -1;
        bool flag = false;
        for(int i = 0; i < n; ++i)
        {
            for(int j = i + 1; j < n; ++j)
            {
                if(nums[j] + nums[i] == target)
                {
                    indx = i, indx_2 = j;
                    flag = true;
                    break;
                }
            }
            if(flag) break;
        }

        return {indx, indx_2};
    }
};

// With Hash Map

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp; 

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];

            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};



