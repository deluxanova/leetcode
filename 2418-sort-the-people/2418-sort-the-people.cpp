class Solution {
public:    
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<pair<int,string>> vp;
        vector<string> ans(n);
        
        for(int i = 0;i<n;i++)
            vp.push_back( {heights[i],names[i]} );
        
        sort(vp.rbegin(), vp.rend());
        
        for(int i = 0;i<n;i++)
            ans[i] = vp[i].second;
        
        return ans;
    }
};