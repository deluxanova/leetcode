class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.size(),-1);

        unordered_map<int,int> hshmp;
        for(int i = 0;i<nums1.size();i++)  
            hshmp[ nums1[i] ] = i;
        
        stack<int> stk;
        
        for(int i = 0;i<nums2.size();i++){
            while( stk.size()>0 && nums2[i]>stk.top() ){
                ans[ hshmp[stk.top()] ] = nums2[i];  
                stk.pop();
            }
                
            if( hshmp.find( nums2[i] )!=hshmp.end() )
                stk.push( nums2[i] );
        }
        return ans;
    }
};