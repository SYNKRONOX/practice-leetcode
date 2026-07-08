class Solution {
public:// MOORE's voting algorithm
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int el;
        for(int i = 0; i < n; i++){
            if(cnt == 0){
                cnt = 1;
                el = nums[i];// we will have the required element after this for loop
            }
            else if(nums[i] == el){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt1 = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == el){
                cnt1++; // this counter is for what we actually for the finally standing soldier elemnt el
            }
        }
        if(cnt1 > n/2){
            return el;
        }
        return {};
    }
};