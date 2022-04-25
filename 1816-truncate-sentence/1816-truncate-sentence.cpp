class Solution {
public:
    string truncateSentence(string s, int k) {
        
        string ans = "";
        int words = 0;
        
        for ( char i : s ) {
            if ( i == ' ') 
                words++;
            if ( words < k ) 
               ans += i;
        }
        return ans;
    }
};

// TC - O(n)   SC - O(n)
