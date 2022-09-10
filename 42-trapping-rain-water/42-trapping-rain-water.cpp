class Solution {
public:
    int trap(vector<int>& arr) {
        int n = arr.size();
        int left = 0,right = n-1,l_max = 0,r_max = 0, ans = 0;
        
        while( left<=right ){
            if( r_max<=l_max ){
                ans += max( 0,r_max-arr[right] );
                r_max = max( r_max,arr[right] );
                right--;
            }
            else{
                ans += max( 0,l_max-arr[left] );
                l_max = max( l_max,arr[left] );
                left++;
            }
        }
        return ans;
    }
};