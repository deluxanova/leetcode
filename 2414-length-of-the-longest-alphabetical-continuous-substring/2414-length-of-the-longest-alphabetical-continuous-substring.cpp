class Solution {
public:
    int longestContinuousSubstring(string s) {
        int count = 0,n = s.size(),ans = 0;
        
        for(int i = 1;i<n;i++){
            int curr = s[i],prev = s[i-1];
            if( curr-prev==1 ){
                count++;
                ans = max(count,ans);
            }
            else 
                count=0;
        }
        
        return (ans==0)?1:ans+1;
    }
};