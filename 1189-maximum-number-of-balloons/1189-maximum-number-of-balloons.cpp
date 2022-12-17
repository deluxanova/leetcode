class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int res = INT_MAX;
        unordered_map<char,int> cnt; 
        
        string f = "balloon";
        for(auto it:f)  cnt[it] = 0;
        
        for( auto curr:text ){
            if( curr=='b' || curr=='a' || curr=='l' || curr=='o' || curr=='n' )
                cnt[curr]++;
        }
        
        cnt['l'] = cnt['l']/2;
        cnt['o'] = cnt['o']/2;
        
        for( auto it:cnt )
            res = min( res,it.second );

        return res;
    }
};