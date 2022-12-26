class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int,int> mp;
        vector<vector<int>> count(n+1);
        
        for(auto it:nums)
            mp[it]++;
        
        for(auto it:mp)
            count[it.second].push_back(it.first);
        
        for(int i = n;i>=1 && k>0;i--){
                for(auto it:count[i]){
                    if(k>0){
                        ans.push_back( it );
                        k--;
                    }   
                }
            }
        return ans;
    }
};