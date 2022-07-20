class Solution {
public:
    int titleToNumber(string s) {
        int ans=0;
        for( auto curr:s ){
            int tmp = curr-'A'+1;
            ans = ans*26+tmp;
        }
        return ans;
    }
};