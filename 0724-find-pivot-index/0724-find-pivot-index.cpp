class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0,prev=0;
        int sum = accumulate(nums.begin(),nums.end(),0),n = nums.size();
        for(int i = 0;i<n;i++){
            left += nums[i];
            sum -= prev;
            if(left==sum)
                return i;
            prev = nums[i];
        }
        return -1;
    }
};