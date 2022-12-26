class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        int r = wall.size(),c = wall[0].size(),total = 0,val = 0,gap = 0;
        unordered_map<int,int> mp;
        
        for(int i = 0;i<r;i++){
            c = wall[i].size();
            total = 0;
            for(int j = 0;j<c-1;j++){
                total += wall[i][j];
                mp[total]++;
            }
        }
        
        for(auto curr:mp){
            if( curr.second>val ){
                gap = curr.first;
                val = curr.second;
            }
        }
        return r-val;
    }
};