class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int result = 0;
        vector<bool> seen(51, false);
        for(int num : nums){
            if(seen[num]){
                result ^= num;
            }
            else{
                seen[num] = true;
            }
        }
        return result;
    }
};