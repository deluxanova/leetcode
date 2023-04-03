class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zc = 0,zpos = 0,prod = 1,n = nums.size();
        vector<int> ans(n,0);
        for(int i = 0;i<n;i++){     
            if( nums[i]==0 ){
                zc++;
                zpos = i;
            }
            else
                prod*=nums[i];
        }
        
        
        if( zc>1 )
            return ans;
        else if( zc==1 ){
            ans[zpos] = prod;
            return ans;
        }
        else{
            vector<int> lr(n,0),rl(n,0);
            
            prod = 1;
            for(int i = 0;i<n;i++){
                prod *= nums[i];
                lr[i] = prod;
            }
             prod = 1;
            for(int i = n-1;i>=0;i--){
                prod *= nums[i];
                rl[i] = prod;
            }
            

            int pos = 1;
            for(int i = 1;i<n-1;i++)
                ans[i] = lr[i-1]*rl[i+1];
            ans[0] = rl[1];
            ans[n-1] = lr[n-2];
        }
        return ans;     
    }
};