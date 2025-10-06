class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;

        //O(nlogn+mlogm)
	// you can use map also.
	}
};
