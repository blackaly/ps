class Solution {
public:
    int climbStairs(int n) {
       if(n == 1) return 1;

       vector<int> vt(n, 0);
       vt[0] = 1;
       vt[1] = 2;

       for(int i = 2; i < n; ++i)
       {
            vt[i] = vt[i - 1] + vt[i - 2];
       }

       return vt[n - 1];
    }
};
