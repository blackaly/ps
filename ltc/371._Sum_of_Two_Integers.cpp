
// Author: Ali Muhammad   # Date: 2025-03-11 21:06:19
public class Solution {
    public int GetSum(int a, int b) {

        while(b != 0)
        {
            int carry = a & b;
            a ^= b;
            b = carry << 1;
        }

        return a;
    }
}
