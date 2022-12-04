class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string res = "";
        
        sort( s.begin(),s.end() );
        
        for(int i = 0;i<s[0].size();i++){
            if( s[0][i]!=s[s.size()-1][i] )
                return res;
            res += s[0][i];
        }
        return res;
    }
};