class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        vector<int> cntzro,ans(nums.size(),0);
        
        for(int i = 0;i<nums.size();i++){
            if( nums[i]==0 )
                cntzro.push_back(i);
        }
        
        if(cntzro.size()>1)
            return ans;
        
        for(auto curr:nums){
            if(curr!=0)
                prod *= curr;
        }
        
        if(cntzro.size()==1){
            ans[ cntzro[0] ] = prod;
            return ans;
        }
        else{
            for(int i = 0;i<nums.size();i++)
                ans[i] = prod/nums[i];
        }
        return ans;   
    }
};