class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int n = players.size(),m = trainers.size(),pos1 = 0,pos2 = 0,ans = 0;
        
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
                
        while( pos1<n && pos2<m ){
            if( players[pos1]<=trainers[pos2] ){
                ans++;
                pos1++;pos2++;
            }
            else
                pos2++;
        }
        return ans;
    }
};