class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int ans = -1,n = nums.size();
        vector<int> a1(n),a2(n);
        
        a1[0] = nums[0];
        for(int i = 1;i<n;i++){
            a1[i] = nums[i]+a1[i-1];
        }
        
        a2[n-1] = nums[n-1];
        for(int i = n-2;i>=0;i--){
            a2[i] = nums[i]+a2[i+1];
        }
        
        for(int i = 0;i<n;i++){
            if( a1[i]==a2[i] ) {
                 ans = i;
                 break;
            }
               
        }
        return ans;
        
    }
};