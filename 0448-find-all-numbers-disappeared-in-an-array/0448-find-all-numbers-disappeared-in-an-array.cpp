class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& arr) {
        vector<int> ans;
        
        for(int i = 0;i<arr.size();i++){
            int pos = abs( arr[i] ) - 1;
            arr[pos] = -1 * abs( arr[pos] );
        }
        
        for(int i = 0;i<arr.size();i++){
            if( arr[i]>0 )
                ans.push_back( i+1 );
        }
        
        return ans;
    
    
    
    }
};