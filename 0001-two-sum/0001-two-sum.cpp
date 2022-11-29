class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> ans(2,0);
        
        for(int i = 0;i<nums.size();i++)
            mp[ nums[i] ] = i; 
        
        for(auto it:mp)
            cout<<it.first<<" "<<it.second<<endl;
        cout<<endl;

        
        
        for(int i = 0;i<nums.size();i++)
            nums[i] = target-nums[i];
        
        for(auto it:nums)
            cout<<it<<" ";
        cout<<endl;
        
        
        for(int i = 0;i<nums.size();i++){
            //cout<<nums[i];
            if( mp.find( nums[i] )!=mp.end() && mp[ nums[i] ]!=i ){
                cout<<nums[i];
                ans[0] = i;ans[1] = mp[ nums[i] ]; 
                break;
            }
        }
        
        return ans;
    }
};