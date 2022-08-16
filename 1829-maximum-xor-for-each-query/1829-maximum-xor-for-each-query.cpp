class Solution {
public:
    
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        
        int n = nums.size(),mbit = pow(2,maximumBit)-1, v = nums[0];
        vector<int> ans;
        
        for(int i = 1;i<n;i++){
            v ^= nums[i];
            nums[i] = v;
        }
        
        for(int i = n-1;i>=0;i--)
            ans.push_back( nums[i]^mbit );
        
        return ans;    
    }
};