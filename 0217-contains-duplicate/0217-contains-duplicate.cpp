class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //creating a set to check for repeat occurences no need for map as we only neec to check repeat not exact count so that information is useless.
        unordered_set<int> st; 
        
        for(int i = 0;i<nums.size();i++){
            if( st.find( nums[i] )!=st.end() )
                return true;
            st.insert( nums[i] );
        }
        return false;
    }
};