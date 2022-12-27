class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int extra) {
        int n = rocks.size(),full = 0;
        vector<int> space(n,0);
        
        for(int i = 0;i<n;i++)
            space[i] = capacity[i]-rocks[i];
        
        sort( space.begin(),space.end() );
        
        //for(int i = 1;i<n;i++)
            //space[i] += space[i-1];
        
        for(int i = 0;i<n;i++){
            if( extra>=space[i] || space[i]==0 ){
                extra -= space[i];
                full++;
            }
        }

        return full;
    }
};