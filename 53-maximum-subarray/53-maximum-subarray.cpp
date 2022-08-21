class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size(), sum_max = nums[0], curr_sum = 0;
        
        for(int i = 0;i<n;i++){
            curr_sum += nums[i];
            if( curr_sum>sum_max )
                sum_max = curr_sum;
            if( curr_sum<0 )
                curr_sum = 0;
        }
        return sum_max;
    }
};