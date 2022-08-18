class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        vector<char> cmap1(128),cmap2(128);
        
        for(int i = 0;i<n;i++){
            int pos = s[i];
            if( cmap1[pos]==NULL || cmap1[pos]==t[i] ){
                cmap1[pos] = t[i];
            }
            else
                return false;
        }
        
        for(int i = 0;i<n;i++){
            int pos = t[i];
            if( cmap2[pos]==NULL || cmap2[pos]==s[i] ){
                cmap2[pos] = s[i];
            }
            else
                return false;
        }
        
        return true;
    }
};