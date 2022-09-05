class Solution {
public:
    int minPairSum(vector<int>& nums) {
        
        sort( nums.begin(),nums.end() );
        
        int strt = 0, end = nums.size()-1,ans = INT_MIN;
        
        while( strt<end ){
            ans = max( ans,nums[strt]+nums[end] );
            strt++;
            end--;
        }
        return ans;
    }
};