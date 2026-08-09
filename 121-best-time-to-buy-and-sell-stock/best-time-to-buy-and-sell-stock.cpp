class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxi = 0;

        for(int price : prices){
            minPrice = min(minPrice, price);

            int currentProfit = price - minPrice;
            maxi = max(currentProfit, maxi);
        }
        return maxi;
    }
};