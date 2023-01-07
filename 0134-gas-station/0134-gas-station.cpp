class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sg = 0,sc = 0,strt_pos = 0,total = 0,n = gas.size();
        for( auto it:gas )
            sg += it;
        for( auto it:cost )
            sc += it;
        
        if( sg<sc )
            return -1;
        
        for(int i = 0;i<n;i++){
            total += gas[i]-cost[i];
            
            if( total<0 ){
                total = 0;
                strt_pos = i+1;
            }
        }
        return strt_pos;
    }
};