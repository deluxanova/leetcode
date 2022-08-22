class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int n = nums.size();
        
        int curMax = nums[0],curMin = nums[0],ans = curMax;
        
        for (int i = 1; i < n; i++) {
            int tmp = curMax;
            curMax = max(tmp*nums[i], max(curMin*nums[i], nums[i]));
            curMin = min(tmp*nums[i], min(curMin*nums[i], nums[i]));
            
            ans = max(ans, curMax);
        }
        return ans;
    }
};