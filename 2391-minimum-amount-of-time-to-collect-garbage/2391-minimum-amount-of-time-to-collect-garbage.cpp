class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int count = 0,ans = 0,n = garbage.size();
        for(auto it:garbage)
            count+=it.size();
        ans+=count;
        
        vector<int> time(3,0);
        for(int i = 0;i<n;i++){
            string curr = garbage[i];
            for(auto it:curr){
                if(it=='M')
                    time[0] = i;
                if(it=='P')
                    time[1] = i;
                if(it=='G')
                    time[2] = i;
            }
        }
        
        
        for(int i = 1;i<n-1;i++)
            travel[i]+=travel[i-1];
        
        for(auto i:time){
            if(i>0)
                ans+=travel[i-1];
        }
        
        return ans; 
    }
};