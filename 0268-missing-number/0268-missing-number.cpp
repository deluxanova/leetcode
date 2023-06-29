class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(),curr_sum = 0,true_sum = (n*(n+1))/2;
        
        for(auto it:nums)
            curr_sum += it;
        
        return true_sum-curr_sum;
        
    }
};