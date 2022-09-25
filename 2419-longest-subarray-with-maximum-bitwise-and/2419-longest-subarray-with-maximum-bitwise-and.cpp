class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size(),len = 0,ans = 1;
        int maxele = *max_element(nums.begin(), nums.end());
        
        for( auto curr:nums ){
            if ( curr==maxele ){
                len++;
                ans = max( ans,len );
            } 
            else 
                len = 0;
        }
        return ans;
    }
};