class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        int lim = 0;
        for(auto it:items1)
            lim = max(lim,it[0]);
        for(auto it:items2)
            lim = max(lim,it[0]);
        
        vector<vector<int>> ans;
        vector<int> tmp(lim+1,-1);
        
        for(auto it:items1){
            if( tmp[ it[0] ]==-1 )
                tmp[ it[0] ] = it[1];
            else
                tmp[ it[0] ]+=it[1];
        }
        
        for(auto it:items2){
            if( tmp[ it[0] ]==-1 )
                tmp[ it[0] ] = it[1];
            else
                tmp[ it[0] ]+=it[1];
        }
        
        for(int i = 0;i<lim+1;i++){
            if( tmp[i]!=-1 )
                ans.push_back( {i,tmp[i]} );
        }
        
        return ans;
        
        
        
        
    }
};