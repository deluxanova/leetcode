class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int ans = 0,n = costs.size();
        sort( costs.begin(),costs.end() );
        int pos = 0;
        while( pos<n ){
            if( costs[pos]<=coins ){
                ans++;
                coins -= costs[pos];
            }
            else
                break;
            pos++;
        } 
        return ans;
    }
};