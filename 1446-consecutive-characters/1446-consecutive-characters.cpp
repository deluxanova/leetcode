class Solution {
public:
    int maxPower(string s) {
        int cnt = 1,ans = 1;
        for(int i = 1;i<s.size();++i){
            if( s[i]==s[i-1] ) cnt++;
            else{
                ans = max(ans,cnt);
                cnt = 1;
            }
        }
        return max(ans,cnt);
    }
};