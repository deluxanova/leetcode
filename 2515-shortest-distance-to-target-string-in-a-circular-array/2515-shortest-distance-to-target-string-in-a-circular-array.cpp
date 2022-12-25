class Solution {
public:
    int closetTarget(vector<string>& arr, string tgt, int strt) {
        int ans = INT_MAX, n = arr.size(); 
        for (int i = 0;i<n;i++) {
            if (arr[i] == tgt) {
                int res = abs( i-strt ); 
                ans = min( {ans,res,n-res} ); 
            }
        }
        return (ans<INT_MAX)?ans:-1; 
    }
};