class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int ans = 0,pos = 0;
        for(auto it:items){
            if( ruleKey=="type" )
                pos = 0;
            else if( ruleKey=="color" )
                pos = 1;
            else
                pos = 2;
            
            if( it[pos]==ruleValue )
                ans++;
        }
        return ans;
    }
};