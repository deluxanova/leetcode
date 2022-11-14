class Solution {
public:
    int minSteps(string s, string t) {
        int ans = 0;
        unordered_map<char,int> mp;
        
        for( auto it:s )    mp[it]++;
        
        for( auto it:t )
            if( mp.find(it)!=mp.end() ) mp[it]--;
        
        for(auto it:mp)
            if( it.second>0 )   ans += it.second;
        
        return ans;
    }
};