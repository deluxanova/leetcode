class Solution {
public:
    int partitionString(string s) {
        map<char,int> mp;
        int ans = 0;
        for(int i = 0;i<s.size();i++){
            if( mp.find(s[i])!=mp.end() ){
                ans++;
                mp.clear();
                mp[ s[i] ]++;
            }
            else
                mp[ s[i] ]++;
        }
        
        return ans+1;
    }
};


