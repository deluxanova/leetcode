class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int l = piles.size()-(piles.size()/3),ans = 0;
        
        sort(piles.begin(), piles.end(), std::greater<int>());
        
        for(int i = 0;i<l;i++){
            if( i&1 ) 
                ans+= piles[i];  
        }

        return ans;
    }
};