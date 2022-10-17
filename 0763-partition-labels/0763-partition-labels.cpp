class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size();
        vector<int> lastoccur(26,0);
        
        for(int i = 0;i<n;i++)
            lastoccur[ s[i]-'a' ] = i;
        
        vector<int> res;
        
        int start = 0, end = 0;

        for(int i = 0; i < n; ++i){
            end = max(end, lastoccur[s[i] - 'a']);
            if( i==end ){
                res.push_back( i-start+1 );
                start = i+1;
            }
        }
        
        return res; 
    }
};