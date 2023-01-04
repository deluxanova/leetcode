class Solution {
public:
    int minimumRounds(vector<int>& arr) {
        map<int,int> mp;
        for(auto it:arr)
            mp[it]++;
        
        int steps = 0;
        for(auto it:mp){
            int cnt = it.second;
            if( cnt==1 )
                return -1;
            else if( cnt==2 || cnt==3)
                steps++;
            else if( cnt%3==0 )
                steps += cnt/3;
            else{
                if( (cnt-2)%3==0 )
                    steps += ((cnt-2)/3) + 1; 
                else if( (cnt-4)%3==0 )
                    steps += ((cnt-4)/3) + 2;
            }
        }
        return steps;
    }
};