class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.empty()){
            return false;
        }
        bool bro = false;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                 bro = true;
            }
        }
        return bro;
    }
};