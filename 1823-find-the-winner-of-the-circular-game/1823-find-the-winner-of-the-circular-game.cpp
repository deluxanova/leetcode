class Solution {
public:
    int findTheWinner(int n, int k) {
        
        vector<int> arr(n);
        for(int i = 0;i<n;i++)
            arr[i] = i+1;
        
        int elim = 0,pos = 0,cnt = 0,ans = 0;
        
        while( elim<(n-1) ){
            if( pos>n-1 ) pos = 0;
            
            if(arr[pos]==-1){
                pos++;
                continue;
            }
            
            else{
                cnt++;
                if(cnt==k){
                    arr[pos] = -1;
                    cnt = 0;
                    elim++;
                }
            }
            pos++;
        }

        for(auto it:arr){
            if( it!=-1 ){
                ans = it;
                break;
            }
        }
        return ans;
        
    }
};