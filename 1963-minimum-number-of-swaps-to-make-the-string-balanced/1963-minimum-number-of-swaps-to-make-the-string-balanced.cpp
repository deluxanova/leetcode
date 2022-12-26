class Solution {
public:
    int minSwaps(string s) {
        int curr = 0,maxyet = 0;
        
        for( auto it:s ){
            curr += (it=='[')?-1:1;
            maxyet = max(maxyet,curr);
        }
        return (maxyet+1)/2;
    }
};