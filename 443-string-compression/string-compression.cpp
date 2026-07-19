class Solution {
public:
    int compress(vector<char>& chars) {
        if(chars.size() == 0){return 0;};
        if(chars.size() == 1){return 1;};
        
        
        int n = chars.size();
        int i = 0;
        int write = 0;
        while(i < n){
            char currentChar = chars[i];
            int count = 0;
            while(i < n && chars[i] == currentChar){
                count++;
                i++;
            }
            chars[write++] = currentChar;
            if(count > 1){
                string cnt = to_string(count);
                for (char c : cnt){
                    chars[write++] = c;
                }
            }
        }
        chars.resize(write);
        return write;
        
    }
};