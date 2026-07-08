class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n - 1;
        vector<pair<int, int>> pairs;
        for(int i = 0; i < n; i++){
            pairs.push_back({nums[i], i});
        }
        sort(pairs.begin(), pairs.end());
        while(left < right){
            if(pairs[left].first + pairs[right].first == target){
                return {pairs[left].second, pairs[right].second};
            }
            if(pairs[left].first + pairs[right].first < target){
                left++;
            }
            if(pairs[left].first + pairs[right].first > target){
                right--;
                }
            }return {};
    }
};