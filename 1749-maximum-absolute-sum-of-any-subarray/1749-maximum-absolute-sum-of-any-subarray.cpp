class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size(),ans = nums[0];
        if( n==1 ) 
            return abs( nums[0] );
        vector<int> dpmax(n+1),dpmin(n+1);
        dpmax[0] = nums[0];dpmin[0] = nums[0];
        
        for(int i = 1;i<n;i++){
            dpmax[i] = max( nums[i],nums[i]+dpmax[i-1] );
            dpmin[i] = min( nums[i],nums[i]+dpmin[i-1] );
            ans = max( ans,max( abs(dpmax[i]),abs(dpmin[i]) ) );
            
        }
        return ans;
    }
};