class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        map< int,set<int> > mp;
        vector<int> ans(k,0);
        
        for(auto it:logs){
            int id = it[0],time = it[1];
            mp[id].insert(time);
        }
        
        for(auto it:mp){
            int s = it.second.size();
            ans[s-1]++;
        }
        
        return ans;
        
    }
};