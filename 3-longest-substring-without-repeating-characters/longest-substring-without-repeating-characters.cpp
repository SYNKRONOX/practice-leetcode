class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        vector<int> hmap(256, -1);
        int l = 0, r = 0, maxLen = 0;
        while(r < n){
            if(hmap[s[r]]!= -1){
                if(hmap[s[r]] >= l){
                    l = hmap[s[r]] + 1;
                }
            }
            maxLen = max(maxLen, r - l + 1);
            hmap[s[r]] = r;
            r++;
        }
        return maxLen;
    }
};