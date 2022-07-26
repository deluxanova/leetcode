class Solution {
public:
    int minOperations(int n) {
        int ans = 0,sum = 0,tgt = 0;
        vector<int> arr(n);
        
        for(int i = 0;i<n;i++){
            arr[i] = (2*i)+1;
            sum += arr[i];
        }
        tgt = sum/n;
        
        for( auto it:arr ){
            if( (it-tgt)>0 )
                ans += (it-tgt);  
        }
        return ans;
    }
};