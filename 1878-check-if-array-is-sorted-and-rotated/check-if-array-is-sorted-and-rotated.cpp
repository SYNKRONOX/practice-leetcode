class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        bool bro  = true;
        int le = 0, gr = 0;
        for(int i = 0; i < n - 1; i++){
            if(nums[i] <= nums[i + 1]){
                le++;
            }
            else{
                gr++;
            }
        }
        if(le == n - 2 && gr == 1 && nums[0] >= nums[n - 1]){ // rotated array
            return true;
        }
        else if(le == n - 1 && nums[0] <= nums[n - 1]){ // sorted array
            return true;
        }
        else{
            return false;
        }
    }
};