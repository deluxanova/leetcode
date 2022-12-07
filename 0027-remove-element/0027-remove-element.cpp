class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == val){
                continue;
            }
            count++;
        }
        if (count == 0) return count;
        int right = nums.size()-1;
        for (int left = 0; left < right; left++){
            while (nums[right] == val && left < right){
                right--;
            }
            if (nums[left] == val){
                swap(nums[left], nums[right]);
                right--;
            }
        }
        return count;
    }
};