class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0 = 0,c1 = 0,c2 = 0,n = nums.size();
        
        for(auto it:nums){
            if( it==0 ) c0++;
            else if( it==1 ) c1++;
            else c2++;
        }
        int pos = 0;
        while(pos<n && c0>0){
            nums[pos] = 0;
            pos++;
            c0--;
        }
        while(pos<n && c1>0){
            nums[pos] = 1;
            pos++;
            c1--;
        }
        while(pos<n && c2>0){
            nums[pos] = 2;
            pos++;
            c2--;
        }
    }
};