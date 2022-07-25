class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size(),m = bank[0].size(),cnt = 0;
        
        vector<int> levels;
        for(int i = 0;i<n;i++){
            cnt = 0;
            for(auto c:bank[i]){
                if( c=='1' ) cnt++;
            }
            levels.push_back(cnt);
        }
        
        int ans = 0;
        for(int i = 0;i<n-1;i++){
            int curr = levels[i];
            for(int j = i+1;j<n;j++){
                if( levels[j]==0 )
                    continue;
                else{
                    ans += curr*levels[j];
                    break;
                }
            }    
        }
        return ans;
        
    }
};