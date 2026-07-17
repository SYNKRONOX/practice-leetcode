class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> mpp;
        for(int i = 0; i < n; i++){
            int num = nums[i];
            int numneed = target - num;
            if(mpp.find(numneed) != mpp.end()){
                return {mpp[numneed], i};
            }
            mpp[num] = i;
        }
        return{};
    }
};