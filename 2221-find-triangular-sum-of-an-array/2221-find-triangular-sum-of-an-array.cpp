class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int len = nums.size();
        if( len==1 )
            return nums[0];
        vector<int> newnum(len-1);
        for(int i = 0;i<len-1;i++){
            newnum[i] = (nums[i]+nums[i+1])%10;
        }
        return triangularSum(newnum);    
    }
};