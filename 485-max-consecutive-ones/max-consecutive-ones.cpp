class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int cnt1 = 0;
        int i = 0;
        while(i < n){
            if(nums[i] == 1){
                cnt++;
            }
            else{
                cnt = 0;
            }
            cnt1 = max(cnt1, cnt);
            i++;
        }
        return cnt1;
    }
};