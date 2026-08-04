class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int  cnt = 0;
        int num = 0;
        while(i < n){
            if(cnt == 0){
                num = nums[i];
                cnt++;
            }
            else if(nums[i] == num){
                cnt++; 
            }
            else if(nums[i] != num){
                cnt--;  
            }
            i++;
        
    }
    int cnt1 = 0;
    for(int i = 0; i < n; i++){
            if(nums[i] == num){
                cnt1++;
            }
        }
        if(cnt1 > n/2){
            return num;
        }
        else{
            return -1;
        }
        return {};
    }
    
};