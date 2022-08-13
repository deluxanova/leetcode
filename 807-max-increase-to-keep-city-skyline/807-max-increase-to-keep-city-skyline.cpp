class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = grid.size(),prev = 0,ans = 0;
        vector<int> maxs,vals;
        
        for(int i = 0;i<n;i++){
            int t1 = 0,t2 = 0;
            for(int j = 0;j<n;j++){
                t1 = max(t1,grid[i][j]);
                t2 = max(t2,grid[j][i]);
                prev += grid[i][j];
            }
            maxs.push_back(t1);
            vals.push_back(t2);
        }
        
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if( vals[j]<maxs[i] )
                    grid[i][j] = vals[j];
                else
                    grid[i][j] = maxs[i];
                ans += grid[i][j];
            }
        }
        
        return abs(ans-prev);
    }
};