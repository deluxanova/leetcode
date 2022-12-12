class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res,count=0;
        for(int i=0;i<nums.size();i++){
            if(count)
                count+=( nums[i]==res?1:-1 );
            else{
                res=nums[i];
                count=1;
            }
        }
        return res;
    }
};