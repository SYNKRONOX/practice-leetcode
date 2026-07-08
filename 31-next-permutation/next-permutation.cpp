class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int ind = -1;
        //1. Now the dip and the longer prefix match(actually the first < signed one)
        for(int i = n - 2; i >= 0; i--){
            if(nums[i] < nums[i + 1]){
                ind = i;
                break;
            }
        }
            //2.edge case
            if(ind == -1){
                reverse(nums.begin(), nums.end());
                return;
            }
            //3.now swapping the elment at the index with elment which the one larger after the elment at eh index
            for(int i = n - 1; i > ind; i--){
                if(nums[i] > nums[ind]){
                    swap(nums[i], nums[ind]);
                    break;
                }
            }
            //4.now the starting longer prefix is fixed from the end to the longer prefix's end it will be in an decreasing ordeer therfore we reverse
            reverse(nums.begin() + ind + 1, nums.end());
        }
};