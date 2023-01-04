class Solution {
public:
    int minimumRounds(vector<int>& arr) {
        int rounds = 0;
        unordered_map<int,int> mp;
        for(auto it:arr)
            mp[it]++;
        
        for(auto it:mp){
            int count = it.second;
            if( count==1 )
                return -1;
            if( count%3==0 )
                rounds += count/3;
            else 
                rounds += count/3 + 1;
        }
        return rounds;
    }
};