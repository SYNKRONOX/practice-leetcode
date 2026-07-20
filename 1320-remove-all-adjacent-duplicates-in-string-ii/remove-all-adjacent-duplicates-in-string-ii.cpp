class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char, int>> stk;//vectoe implemntation of stack

        for(char x : s){
            if(!stk.empty() && stk.back().first == x){
                stk.back().second++;
            }
            else{
                stk.push_back({x, 1});
            }
            if(stk.back().second >= k){
                stk.pop_back();
            } 
        }
        string result;
        for(auto& p : stk){
            for(int i = 0; i < p.second; i++){
                result.push_back(p.first);
            }
        }
        return result;
    }
};