class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int j = 0;
        int maxi = INT_MIN;
        for(int i = 0; i < n; i++ ){
        for(int j = i+1; j < n; j++){
            maxi = max(maxi, arr[j]);
        }
        arr[i] = maxi;
        maxi = INT_MIN;
        }
        arr[n - 1] = -1;
        return arr;
    }
};